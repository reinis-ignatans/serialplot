/********************************************************************************
** Form generated from reading UI file 'framedreadersettings.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEDREADERSETTINGS_H
#define UI_FRAMEDREADERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "commandedit.h"
#include "endiannessbox.h"
#include "numberformatbox.h"

QT_BEGIN_NAMESPACE

class Ui_FramedReaderSettings
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    CommandEdit *leSyncWord;
    QLabel *label_2;
    QSpinBox *spNumOfChannels;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbFixedSize;
    QSpinBox *spSize;
    QRadioButton *rbSize1Byte;
    QRadioButton *rbSize2Byte;
    QLabel *label_4;
    NumberFormatBox *nfBox;
    QLabel *label_5;
    EndiannessBox *endiBox;
    QLabel *label_6;
    QCheckBox *cbChecksum;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lMessage;
    QCheckBox *cbDebugMode;

    void setupUi(QWidget *FramedReaderSettings)
    {
        if (FramedReaderSettings->objectName().isEmpty())
            FramedReaderSettings->setObjectName("FramedReaderSettings");
        FramedReaderSettings->resize(852, 222);
        verticalLayout = new QVBoxLayout(FramedReaderSettings);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        leSyncWord = new CommandEdit(FramedReaderSettings);
        leSyncWord->setObjectName("leSyncWord");

        formLayout->setWidget(0, QFormLayout::FieldRole, leSyncWord);

        label_2 = new QLabel(FramedReaderSettings);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spNumOfChannels = new QSpinBox(FramedReaderSettings);
        spNumOfChannels->setObjectName("spNumOfChannels");
        spNumOfChannels->setMinimum(1);
        spNumOfChannels->setMaximum(32);

        formLayout->setWidget(1, QFormLayout::FieldRole, spNumOfChannels);

        label_3 = new QLabel(FramedReaderSettings);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        rbFixedSize = new QRadioButton(FramedReaderSettings);
        rbFixedSize->setObjectName("rbFixedSize");

        horizontalLayout->addWidget(rbFixedSize);

        spSize = new QSpinBox(FramedReaderSettings);
        spSize->setObjectName("spSize");
        spSize->setEnabled(false);
        spSize->setMinimum(1);
        spSize->setMaximum(65535);

        horizontalLayout->addWidget(spSize);

        rbSize1Byte = new QRadioButton(FramedReaderSettings);
        rbSize1Byte->setObjectName("rbSize1Byte");
        rbSize1Byte->setChecked(true);

        horizontalLayout->addWidget(rbSize1Byte);

        rbSize2Byte = new QRadioButton(FramedReaderSettings);
        rbSize2Byte->setObjectName("rbSize2Byte");

        horizontalLayout->addWidget(rbSize2Byte);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_4 = new QLabel(FramedReaderSettings);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        nfBox = new NumberFormatBox(FramedReaderSettings);
        nfBox->setObjectName("nfBox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nfBox->sizePolicy().hasHeightForWidth());
        nfBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, nfBox);

        label_5 = new QLabel(FramedReaderSettings);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        endiBox = new EndiannessBox(FramedReaderSettings);
        endiBox->setObjectName("endiBox");

        formLayout->setWidget(4, QFormLayout::FieldRole, endiBox);

        label_6 = new QLabel(FramedReaderSettings);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        cbChecksum = new QCheckBox(FramedReaderSettings);
        cbChecksum->setObjectName("cbChecksum");

        formLayout->setWidget(5, QFormLayout::FieldRole, cbChecksum);

        label = new QLabel(FramedReaderSettings);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lMessage = new QLabel(FramedReaderSettings);
        lMessage->setObjectName("lMessage");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lMessage->sizePolicy().hasHeightForWidth());
        lMessage->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lMessage);

        cbDebugMode = new QCheckBox(FramedReaderSettings);
        cbDebugMode->setObjectName("cbDebugMode");

        horizontalLayout_4->addWidget(cbDebugMode);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(FramedReaderSettings);

        QMetaObject::connectSlotsByName(FramedReaderSettings);
    } // setupUi

    void retranslateUi(QWidget *FramedReaderSettings)
    {
        FramedReaderSettings->setWindowTitle(QCoreApplication::translate("FramedReaderSettings", "Form", nullptr));
#if QT_CONFIG(tooltip)
        leSyncWord->setToolTip(QCoreApplication::translate("FramedReaderSettings", "Enter the 'Frame Start' bytes in hexadecimal.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("FramedReaderSettings", "Number of Channels", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("FramedReaderSettings", "# Channels:", nullptr));
#if QT_CONFIG(tooltip)
        spNumOfChannels->setToolTip(QCoreApplication::translate("FramedReaderSettings", "Select number of channels", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("FramedReaderSettings", "Payload Size:", nullptr));
#if QT_CONFIG(tooltip)
        rbFixedSize->setToolTip(QCoreApplication::translate("FramedReaderSettings", "Frame size is always the same", nullptr));
#endif // QT_CONFIG(tooltip)
        rbFixedSize->setText(QCoreApplication::translate("FramedReaderSettings", "Fixed Size:", nullptr));
#if QT_CONFIG(tooltip)
        spSize->setToolTip(QCoreApplication::translate("FramedReaderSettings", "<html><head/><body><p>Enter the payload size. It <span style=\" font-weight:600;\">must</span> be multiple of (#channels * sample size).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        rbSize1Byte->setToolTip(QCoreApplication::translate("FramedReaderSettings", "First byte after the 'frame start' bytes should be the size of the frame payload. Only counting following bytes but excluding the checksum.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbSize1Byte->setText(QCoreApplication::translate("FramedReaderSettings", "1 byte size field", nullptr));
#if QT_CONFIG(tooltip)
        rbSize2Byte->setToolTip(QCoreApplication::translate("FramedReaderSettings", "First 2 bytes after the 'frame start' bytes should be the size of the frame payload. Only counting following bytes but excluding the checksum.", nullptr));
#endif // QT_CONFIG(tooltip)
        rbSize2Byte->setText(QCoreApplication::translate("FramedReaderSettings", "2 byte size field", nullptr));
#if QT_CONFIG(tooltip)
        label_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("FramedReaderSettings", "Number Type:", nullptr));
#if QT_CONFIG(tooltip)
        label_5->setToolTip(QCoreApplication::translate("FramedReaderSettings", "Byte Order", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("FramedReaderSettings", "Endianness:", nullptr));
        label_6->setText(QCoreApplication::translate("FramedReaderSettings", "Checksum:", nullptr));
#if QT_CONFIG(tooltip)
        cbChecksum->setToolTip(QCoreApplication::translate("FramedReaderSettings", "Last byte of the frame is checksum.", nullptr));
#endif // QT_CONFIG(tooltip)
        cbChecksum->setText(QCoreApplication::translate("FramedReaderSettings", "Enabled", nullptr));
        label->setText(QCoreApplication::translate("FramedReaderSettings", "Frame Start:", nullptr));
        lMessage->setText(QCoreApplication::translate("FramedReaderSettings", "All is well.", nullptr));
#if QT_CONFIG(tooltip)
        cbDebugMode->setToolTip(QCoreApplication::translate("FramedReaderSettings", "Enable printing of extra log messages that can be useful for debugging", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDebugMode->setText(QCoreApplication::translate("FramedReaderSettings", "Debug Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FramedReaderSettings: public Ui_FramedReaderSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMEDREADERSETTINGS_H
