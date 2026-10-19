/*
  Copyright © 2026 serialplot contributors

  This file is part of serialplot.

  serialplot is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  serialplot is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with serialplot.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <cmath>
#include <algorithm>

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPen>
#include <QElapsedTimer>
#include <qwt_text.h>

#include "fftview.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

static_assert((FftView::MAX_FFT_SIZE & (FftView::MAX_FFT_SIZE - 1)) == 0,
              "MAX_FFT_SIZE must be a power of 2");

static const int UPDATE_INTERVAL_MS = 50;    // max. ~20 FFT updates per second
static const double MIN_POWER = 1e-20;       // floor for dB display (-200 dB)

// settings keys
static const char SG_Fft[]           = "FFT";
static const char SG_Fft_Enabled[]   = "enabled";
static const char SG_Fft_Size[]      = "size";
static const char SG_Fft_Window[]    = "window";
static const char SG_Fft_Scale[]     = "scale";
static const char SG_Fft_Average[]   = "average";
static const char SG_Fft_Rate[]      = "sampleRate";
static const char SG_Fft_RemoveDC[]  = "removeDC";

FftView::FftView(const Stream* stream, PlotMenu* menu, QWidget* parent) :
    QWidget(parent),
    _stream(stream),
    _menu(menu),
    _toggleAction(tr("FFT"), this)
{
    head = 0;
    received = 0;
    dirty = false;
    fftSize = 0;
    windowSum = 1;
    measuredRate = 0;
    axisRate = -1;

    _toggleAction.setCheckable(true);
    _toggleAction.setChecked(false);
    _toggleAction.setToolTip(tr("Show FFT (spectrum) of incoming data above the plot"));
    connect(&_toggleAction, &QAction::toggled, this, &FftView::setFftEnabled);

    // --- controls ---
    cbSize = new QComboBox(this);
    for (unsigned n = MIN_FFT_SIZE; n <= MAX_FFT_SIZE; n *= 2)
    {
        cbSize->addItem(QString::number(n), n);
    }
    cbSize->setToolTip(tr("Number of most recent samples used for each FFT"));

    cbWindow = new QComboBox(this);
    cbWindow->addItem(tr("Rectangular"), WindowRectangular);
    cbWindow->addItem(tr("Hann"),        WindowHann);
    cbWindow->addItem(tr("Hamming"),     WindowHamming);
    cbWindow->addItem(tr("Blackman"),    WindowBlackman);
    cbWindow->addItem(tr("Flat top"),    WindowFlatTop);
    cbWindow->setCurrentIndex(1); // Hann
    cbWindow->setToolTip(tr("Window function applied before the FFT"));

    cbScale = new QComboBox(this);
    cbScale->addItem(tr("dB"));
    cbScale->addItem(tr("Linear"));
    cbScale->setToolTip(tr("Amplitude scale. dB is 20·log10(amplitude);\n"
                           "a sine of amplitude A shows a peak of A (linear)."));

    spAverage = new QSpinBox(this);
    spAverage->setRange(1, 64);
    spAverage->setSpecialValueText(tr("Off"));
    spAverage->setToolTip(tr("Exponential averaging of the spectrum over N frames"));

    spSampleRate = new QDoubleSpinBox(this);
    spSampleRate->setRange(0, 1e9);
    spSampleRate->setDecimals(2);
    spSampleRate->setSuffix(" Hz");
    spSampleRate->setSpecialValueText(tr("Auto"));
    spSampleRate->setValue(0);
    spSampleRate->setKeyboardTracking(false);
    spSampleRate->setToolTip(tr("Sample rate of one channel. \"Auto\" (0) uses the\n"
                                "measured samples per second from the status bar."));

    cbRemoveDC = new QCheckBox(tr("Remove DC"), this);
    cbRemoveDC->setChecked(true);
    cbRemoveDC->setToolTip(tr("Subtract the mean before the FFT"));

    lStatus = new QLabel(this);
    lStatus->setMinimumWidth(120);

    auto controls = new QHBoxLayout();
    controls->setContentsMargins(4, 2, 4, 0);
    controls->addWidget(new QLabel(tr("FFT size:"), this));
    controls->addWidget(cbSize);
    controls->addSpacing(6);
    controls->addWidget(new QLabel(tr("Window:"), this));
    controls->addWidget(cbWindow);
    controls->addSpacing(6);
    controls->addWidget(new QLabel(tr("Scale:"), this));
    controls->addWidget(cbScale);
    controls->addSpacing(6);
    controls->addWidget(new QLabel(tr("Avg:"), this));
    controls->addWidget(spAverage);
    controls->addSpacing(6);
    controls->addWidget(new QLabel(tr("Sample rate:"), this));
    controls->addWidget(spSampleRate);
    controls->addSpacing(6);
    controls->addWidget(cbRemoveDC);
    controls->addStretch(1);
    controls->addWidget(lStatus);

    // --- plot ---
    plot = new Plot(this);
    plot->setSymbols(Plot::ShowSymbolsHide);
    plot->setYAxis(true);
    plot->darkBackground(menu->darkBackgroundAction.isChecked());
    plot->showGrid(menu->showGridAction.isChecked());
    plot->showMinorGrid(menu->showMinorGridAction.isChecked());
    plot->showLegend(menu->showLegendAction.isChecked());
    plot->setLegendPosition(menu->legendPosition());

    connect(&menu->showGridAction, &QAction::toggled, plot, &Plot::showGrid);
    connect(&menu->showMinorGridAction, &QAction::toggled, plot, &Plot::showMinorGrid);
    connect(&menu->darkBackgroundAction, &QAction::toggled, plot, &Plot::darkBackground);
    connect(&menu->showLegendAction, &QAction::toggled, plot, &Plot::showLegend);
    connect(menu, &PlotMenu::legendPosChanged, plot, &Plot::setLegendPosition);
    connect(&menu->unzoomAction, &QAction::triggered, plot, &Plot::unzoom);

    QFont axisFont = plot->axisFont(QwtPlot::xBottom);
    axisFont.setPointSizeF(axisFont.pointSizeF() * 0.9);
    plot->setAxisFont(QwtPlot::xBottom, axisFont);
    plot->setAxisFont(QwtPlot::yLeft, axisFont);

    auto layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(2);
    layout->addLayout(controls);
    layout->addWidget(plot, 1);

    // --- signals ---
    connect(cbSize, &QComboBox::currentIndexChanged, this, &FftView::onSettingsChanged);
    connect(cbWindow, &QComboBox::currentIndexChanged, this, &FftView::onSettingsChanged);
    connect(cbScale, &QComboBox::currentIndexChanged, this, &FftView::onSettingsChanged);
    connect(spAverage, &QSpinBox::valueChanged, this, &FftView::onSettingsChanged);
    connect(cbRemoveDC, &QCheckBox::toggled, this, &FftView::onSettingsChanged);
    connect(spSampleRate, &QDoubleSpinBox::valueChanged,
            [this](double) {updateXAxis(true); dirty = true;});

    auto infoModel = _stream->infoModel();
    connect(infoModel, &QAbstractItemModel::dataChanged,
            this, &FftView::onChannelInfoChanged);
    connect(infoModel, &QAbstractItemModel::modelReset,
            this, &FftView::onChannelInfoChanged);

    updateTimer.setInterval(UPDATE_INTERVAL_MS);
    connect(&updateTimer, &QTimer::timeout, this, &FftView::calculate);

    connect(_stream, &Stream::numChannelsChanged, this, [this](unsigned) {resetChannels();});

    setupCalculation();
    resetChannels();
    updateYAxis();
    updateXAxis(true);

    setMinimumHeight(120);
    hide();
}

FftView::~FftView()
{
    for (auto curve : curves)
    {
        curve->detach();
        delete curve;
    }
}

QAction* FftView::toggleAction()
{
    return &_toggleAction;
}

void FftView::setFftEnabled(bool enabled)
{
    if (_toggleAction.isChecked() != enabled)
    {
        _toggleAction.setChecked(enabled); // will call us again
        return;
    }

    if (enabled)
    {
        clear();
        show();
        updateTimer.start();
    }
    else
    {
        updateTimer.stop();
        hide();
    }
}

void FftView::setMeasuredSampleRate(float sps)
{
    measuredRate = sps;
    if (spSampleRate->value() == 0) updateXAxis();
}

double FftView::sampleRate() const
{
    double rate = spSampleRate->value();
    if (rate > 0) return rate;
    return measuredRate > 0 ? measuredRate : 0;
}

void FftView::clear()
{
    for (auto& h : history)
    {
        std::fill(h.begin(), h.end(), 0.);
    }
    head = 0;
    received = 0;
    resetAverages();
    dirty = true;
}

void FftView::setNumChannels(unsigned nc, bool x)
{
    Q_UNUSED(nc);
    // Note: Stream doesn't always forward the channel count to its
    // followers (it skips the update when count doesn't change), so
    // the stream itself is the authoritative source.
    Sink::setNumChannels(_stream->numChannels(), x);
    resetChannels();
}

void FftView::resetChannels()
{
    history.assign(_stream->numChannels(), std::vector<double>(MAX_FFT_SIZE, 0.));
    head = 0;
    received = 0;
    resetAverages();
    syncCurves();
    dirty = true;
}

void FftView::feedIn(const SamplePack& pack)
{
    Sink::feedIn(pack);

    if (!_toggleAction.isChecked()) return;

    const unsigned ns = pack.numSamples();
    const unsigned nc = std::min<unsigned>(pack.numChannels(), history.size());
    const unsigned mask = MAX_FFT_SIZE - 1;

    for (unsigned ci = 0; ci < nc; ci++)
    {
        const double* data = pack.data(ci);
        double* buf = history[ci].data();
        unsigned h = head;
        for (unsigned i = 0; i < ns; i++)
        {
            buf[h] = data[i];
            h = (h + 1) & mask;
        }
    }

    head = (head + ns) & mask;
    received += ns;
    dirty = true;
}

void FftView::onSettingsChanged()
{
    setupCalculation();
    updateYAxis();
    updateXAxis(true);
    dirty = true;
}

void FftView::setupCalculation()
{
    const unsigned N = cbSize->currentData().toUInt();
    const auto wtype = (WindowType) cbWindow->currentData().toInt();

    if (N != fftSize)
    {
        fftSize = N;

        // twiddle factors
        twiddles.resize(N / 2);
        for (unsigned k = 0; k < N / 2; k++)
        {
            twiddles[k] = std::polar(1.0, -2.0 * M_PI * k / N);
        }

        // bit reversal table
        unsigned bits = 0;
        while ((1u << bits) < N) bits++;
        bitRev.resize(N);
        for (unsigned i = 0; i < N; i++)
        {
            unsigned r = 0;
            for (unsigned b = 0; b < bits; b++)
            {
                if (i & (1u << b)) r |= 1u << (bits - 1 - b);
            }
            bitRev[i] = r;
        }

        work.resize(N);
    }

    // window (periodic form, the usual choice for spectral analysis)
    window.resize(N);
    windowSum = 0;
    for (unsigned n = 0; n < N; n++)
    {
        const double p = 2.0 * M_PI * n / N;
        double w;
        switch (wtype)
        {
            case WindowHann:
                w = 0.5 - 0.5 * cos(p);
                break;
            case WindowHamming:
                w = 0.54 - 0.46 * cos(p);
                break;
            case WindowBlackman:
                w = 0.42 - 0.5 * cos(p) + 0.08 * cos(2 * p);
                break;
            case WindowFlatTop:
                w = 0.21557895 - 0.41663158 * cos(p) + 0.277263158 * cos(2 * p)
                    - 0.083578947 * cos(3 * p) + 0.006947368 * cos(4 * p);
                break;
            case WindowRectangular:
            default:
                w = 1.0;
        }
        window[n] = w;
        windowSum += w;
    }

    resetAverages();
}

void FftView::resetAverages()
{
    const unsigned nbins = fftSize / 2 + 1;
    avgPower.assign(history.size(), std::vector<double>(nbins, 0.));
    avgCount.assign(history.size(), 0);
}

void FftView::fft()
{
    // iterative radix-2 Cooley-Tukey, input already in bit-reversed order
    const unsigned N = fftSize;
    std::complex<double>* a = work.data();

    for (unsigned len = 2; len <= N; len <<= 1)
    {
        const unsigned half = len / 2;
        const unsigned step = N / len;
        for (unsigned i = 0; i < N; i += len)
        {
            for (unsigned j = 0; j < half; j++)
            {
                const std::complex<double> t = twiddles[j * step] * a[i + j + half];
                a[i + j + half] = a[i + j] - t;
                a[i + j] += t;
            }
        }
    }
}

void FftView::calculate()
{
    if (!isVisible() || !dirty) return;
    dirty = false;

    QElapsedTimer elapsed;
    elapsed.start();

    const unsigned N = fftSize;
    const unsigned nbins = N / 2 + 1;
    const unsigned mask = MAX_FFT_SIZE - 1;
    const unsigned start = (head + MAX_FFT_SIZE - N) & mask;
    const bool dB = cbScale->currentIndex() == 0;
    const bool removeDC = cbRemoveDC->isChecked();
    const unsigned navg = spAverage->value();
    const auto infoModel = _stream->infoModel();

    const double fs = sampleRate();
    updateXAxis();
    const double binWidth = (fs > 0 ? fs : 1.0) / N; // normalized when fs unknown

    xData.resize(nbins);
    for (unsigned k = 0; k < nbins; k++) xData[k] = k * binWidth;
    yData.resize(nbins);

    const unsigned nc = std::min({(unsigned) history.size(),
                                  (unsigned) curves.size(),
                                  (unsigned) infoModel->rowCount()});
    for (unsigned ci = 0; ci < nc; ci++)
    {
        if (!infoModel->isVisible(ci)) continue;

        const double* buf = history[ci].data();

        double mean = 0;
        if (removeDC)
        {
            for (unsigned i = 0; i < N; i++) mean += buf[(start + i) & mask];
            mean /= N;
        }

        for (unsigned i = 0; i < N; i++)
        {
            work[bitRev[i]] = std::complex<double>(
                (buf[(start + i) & mask] - mean) * window[i], 0.);
        }

        fft();

        auto& avg = avgPower[ci];
        unsigned& count = avgCount[ci];
        const unsigned divisor = std::min(count + 1, navg);

        for (unsigned k = 0; k < nbins; k++)
        {
            // single sided amplitude spectrum, corrected for window gain
            const double scale = ((k == 0 || k == N / 2) ? 1.0 : 2.0) / windowSum;
            const double power = std::norm(work[k]) * scale * scale;

            if (navg <= 1)
                avg[k] = power;
            else
                avg[k] += (power - avg[k]) / divisor;

            yData[k] = dB ? 10. * log10(std::max(avg[k], MIN_POWER)) : sqrt(avg[k]);
        }
        if (count < navg) count++;

        curves[ci]->setSamples(xData, yData);
    }

    // status
    if (received < N)
    {
        lStatus->setText(tr("Collecting %1 / %2").arg(received).arg(N));
    }
    else if (fs > 0)
    {
        lStatus->setText(tr("Δf = %1 Hz").arg(binWidth, 0, 'g', 4));
    }
    else
    {
        lStatus->setText(tr("Sample rate unknown"));
    }

    plot->replot();

    // Large FFTs on many channels can be expensive; keep the GUI responsive
    // by spending at most ~1/3 of the time on FFT updates.
    const int interval = std::max<int>(UPDATE_INTERVAL_MS, 3 * elapsed.elapsed());
    if (interval != updateTimer.interval()) updateTimer.setInterval(interval);
}

void FftView::updateXAxis(bool force)
{
    const double fs = sampleRate();
    const double rate = fs > 0 ? fs : 1.0;

    // measured rate jitters a little; don't reset the axis (and the zoom) for that
    if (!force && axisRate > 0 && std::abs(rate - axisRate) / axisRate < 0.02) return;
    axisRate = rate;

    const double xmax = rate / 2;
    plot->setNumOfSamples(fftSize / 2 + 1);
    plot->setPlotWidth(xmax);
    plot->setXAxis(0, xmax);

    QwtText title(fs > 0 ? tr("Frequency (Hz)") : tr("Frequency (cycles/sample)"));
    QFont f = title.font();
    f.setPointSizeF(plot->axisFont(QwtPlot::xBottom).pointSizeF());
    title.setFont(f);
    plot->setAxisTitle(QwtPlot::xBottom, title);
}

void FftView::updateYAxis()
{
    QwtText title(cbScale->currentIndex() == 0 ? tr("Amplitude (dB)") : tr("Amplitude"));
    QFont f = title.font();
    f.setPointSizeF(plot->axisFont(QwtPlot::yLeft).pointSizeF());
    title.setFont(f);
    plot->setAxisTitle(QwtPlot::yLeft, title);
    plot->setYAxis(true);
}

void FftView::syncCurves()
{
    const unsigned nc = history.size();

    while ((unsigned) curves.size() > nc)
    {
        auto curve = curves.takeLast();
        curve->detach();
        delete curve;
    }

    while ((unsigned) curves.size() < nc)
    {
        auto curve = new QwtPlotCurve();
        curve->setRenderHint(QwtPlotItem::RenderAntialiased, false);
        curve->setPaintAttribute(QwtPlotCurve::FilterPoints, true);
        curve->attach(plot);
        curves.append(curve);
    }

    updateCurveInfo();
}

void FftView::updateCurveInfo()
{
    auto infoModel = _stream->infoModel();
    const unsigned n = std::min<unsigned>(curves.size(), infoModel->rowCount());
    bool anyVisible = false;

    for (unsigned i = 0; i < n; i++)
    {
        auto curve = curves[i];
        curve->setTitle(infoModel->name(i));
        curve->setPen(infoModel->color(i));
        const bool visible = infoModel->isVisible(i);
        curve->setVisible(visible);
        curve->setItemAttribute(QwtPlotItem::Legend, visible);
        anyVisible |= visible;
    }

    plot->showNoChannel(!anyVisible);
    plot->replot();
}

void FftView::onChannelInfoChanged()
{
    updateCurveInfo();
    dirty = true;
}

void FftView::saveSettings(QSettings* settings)
{
    settings->beginGroup(SG_Fft);
    settings->setValue(SG_Fft_Enabled, _toggleAction.isChecked());
    settings->setValue(SG_Fft_Size, cbSize->currentData().toUInt());
    settings->setValue(SG_Fft_Window, cbWindow->currentIndex());
    settings->setValue(SG_Fft_Scale, cbScale->currentIndex());
    settings->setValue(SG_Fft_Average, spAverage->value());
    settings->setValue(SG_Fft_Rate, spSampleRate->value());
    settings->setValue(SG_Fft_RemoveDC, cbRemoveDC->isChecked());
    settings->endGroup();
}

void FftView::loadSettings(QSettings* settings)
{
    settings->beginGroup(SG_Fft);

    int sizeIndex = cbSize->findData(
        settings->value(SG_Fft_Size, cbSize->currentData()).toUInt());
    if (sizeIndex >= 0) cbSize->setCurrentIndex(sizeIndex);

    int windowIndex = settings->value(SG_Fft_Window, cbWindow->currentIndex()).toInt();
    if (windowIndex >= 0 && windowIndex < cbWindow->count())
        cbWindow->setCurrentIndex(windowIndex);

    int scaleIndex = settings->value(SG_Fft_Scale, cbScale->currentIndex()).toInt();
    if (scaleIndex >= 0 && scaleIndex < cbScale->count())
        cbScale->setCurrentIndex(scaleIndex);

    spAverage->setValue(settings->value(SG_Fft_Average, spAverage->value()).toInt());
    spSampleRate->setValue(settings->value(SG_Fft_Rate, spSampleRate->value()).toDouble());
    cbRemoveDC->setChecked(settings->value(SG_Fft_RemoveDC, cbRemoveDC->isChecked()).toBool());
    setFftEnabled(settings->value(SG_Fft_Enabled, _toggleAction.isChecked()).toBool());

    settings->endGroup();
}
