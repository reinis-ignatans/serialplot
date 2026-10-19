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

#ifndef FFTVIEW_H
#define FFTVIEW_H

#include <vector>
#include <complex>

#include <QWidget>
#include <QAction>
#include <QComboBox>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QCheckBox>
#include <QLabel>
#include <QTimer>
#include <QSettings>
#include <QModelIndex>
#include <qwt_plot_curve.h>

#include "sink.h"
#include "stream.h"
#include "plot.h"
#include "plotmenu.h"

/**
 * Displays the amplitude spectrum (FFT) of the incoming data.
 *
 * Connected as a follower of `Stream`, so it receives exactly the
 * data that the time domain plot shows: values after number format
 * decoding (any binary type, ASCII, custom frame...) and after
 * channel gain/offset are applied. Pausing the stream pauses the
 * FFT too.
 *
 * Keeps its own history of `MAX_FFT_SIZE` samples per channel so that
 * FFT size is independent of the "Buffer Size" of the time domain
 * plot.
 */
class FftView : public QWidget, public Sink
{
    Q_OBJECT

public:
    static const unsigned MIN_FFT_SIZE = 1024;
    static const unsigned MAX_FFT_SIZE = 65536;

    enum WindowType
    {
        WindowRectangular = 0,
        WindowHann,
        WindowHamming,
        WindowBlackman,
        WindowFlatTop
    };

    explicit FftView(const Stream* stream, PlotMenu* menu, QWidget* parent = nullptr);
    ~FftView();

    /// Checkable action that toggles the FFT display on/off
    QAction* toggleAction();

    /// Stores FFT settings into a `QSettings`
    void saveSettings(QSettings* settings);
    /// Loads FFT settings from a `QSettings`
    void loadSettings(QSettings* settings);

public slots:
    /// Turn FFT display (and calculation) on/off
    void setFftEnabled(bool enabled);
    /// Measured sample rate (samples/s per channel), used when sample
    /// rate is set to "auto"
    void setMeasuredSampleRate(float sps);
    /// Clears the collected samples
    void clear();

protected:
    // implementations for `Sink`
    void setNumChannels(unsigned nc, bool x) override;
    void feedIn(const SamplePack& pack) override;

private:
    const Stream* _stream;
    PlotMenu* _menu;
    QAction _toggleAction;

    // UI
    Plot* plot;
    QComboBox* cbSize;
    QComboBox* cbWindow;
    QComboBox* cbScale;
    QSpinBox* spAverage;
    QDoubleSpinBox* spSampleRate;
    QCheckBox* cbRemoveDC;
    QLabel* lStatus;

    QList<QwtPlotCurve*> curves;
    QTimer updateTimer;

    // data history (ring buffers, one per channel, MAX_FFT_SIZE long)
    std::vector<std::vector<double>> history;
    unsigned head;              ///< next write position in ring buffers
    unsigned long long received; ///< num. samples received since clear
    bool dirty;                 ///< new data since last calculation

    // calculation state
    unsigned fftSize;
    std::vector<double> window;
    double windowSum;
    std::vector<std::complex<double>> twiddles;
    std::vector<unsigned> bitRev;
    std::vector<std::complex<double>> work;
    std::vector<std::vector<double>> avgPower; ///< per channel averaged power
    std::vector<unsigned> avgCount;            ///< per channel num. of averaged frames
    QVector<double> xData;
    QVector<double> yData;

    float measuredRate;
    double axisRate;            ///< sample rate the X axis is currently set up for

    /// Effective sample rate, 0 if unknown
    double sampleRate() const;
    /// Prepares window, twiddles etc. for current settings
    void setupCalculation();
    /// Resets averaging state
    void resetAverages();
    /// Updates X axis range and title
    void updateXAxis(bool force = false);
    /// Updates Y axis title
    void updateYAxis();
    /// In-place radix-2 FFT of `work`
    void fft();
    /// Reallocate history and curves for the stream's channel count
    void resetChannels();
    /// Recreate curves to match the number of channels
    void syncCurves();
    /// Update curve names/colors/visibility from channel info model
    void updateCurveInfo();

private slots:
    void calculate();
    void onSettingsChanged();
    void onChannelInfoChanged();
};

#endif // FFTVIEW_H
