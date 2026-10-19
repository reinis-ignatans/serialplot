/********************************************************************************
** Form generated from reading UI file 'binarystreamreadersettings.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARYSTREAMREADERSETTINGS_H
#define UI_BINARYSTREAMREADERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "endiannessbox.h"
#include "numberformatbox.h"

QT_BEGIN_NAMESPACE

class Ui_BinaryStreamReaderSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spNumOfChannels;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbSkipByte;
    QPushButton *pbSkipSample;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label_6;
    NumberFormatBox *nfBox;
    EndiannessBox *endiBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *BinaryStreamReaderSettings)
    {
        if (BinaryStreamReaderSettings->objectName().isEmpty())
            BinaryStreamReaderSettings->setObjectName("BinaryStreamReaderSettings");
        BinaryStreamReaderSettings->resize(588, 212);
        verticalLayout = new QVBoxLayout(BinaryStreamReaderSettings);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(BinaryStreamReaderSettings);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        spNumOfChannels = new QSpinBox(BinaryStreamReaderSettings);
        spNumOfChannels->setObjectName("spNumOfChannels");
        spNumOfChannels->setMinimumSize(QSize(60, 0));
        spNumOfChannels->setKeyboardTracking(false);
        spNumOfChannels->setMinimum(1);
        spNumOfChannels->setMaximum(32);

        horizontalLayout_3->addWidget(spNumOfChannels);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pbSkipByte = new QPushButton(BinaryStreamReaderSettings);
        pbSkipByte->setObjectName("pbSkipByte");

        horizontalLayout_3->addWidget(pbSkipByte);

        pbSkipSample = new QPushButton(BinaryStreamReaderSettings);
        pbSkipSample->setObjectName("pbSkipSample");

        horizontalLayout_3->addWidget(pbSkipSample);


        verticalLayout->addLayout(horizontalLayout_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setHorizontalSpacing(3);
        label_5 = new QLabel(BinaryStreamReaderSettings);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(BinaryStreamReaderSettings);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        nfBox = new NumberFormatBox(BinaryStreamReaderSettings);
        nfBox->setObjectName("nfBox");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nfBox->sizePolicy().hasHeightForWidth());
        nfBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, nfBox);

        endiBox = new EndiannessBox(BinaryStreamReaderSettings);
        endiBox->setObjectName("endiBox");
        sizePolicy1.setHeightForWidth(endiBox->sizePolicy().hasHeightForWidth());
        endiBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::FieldRole, endiBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(BinaryStreamReaderSettings);

        QMetaObject::connectSlotsByName(BinaryStreamReaderSettings);
    } // setupUi

    void retranslateUi(QWidget *BinaryStreamReaderSettings)
    {
        BinaryStreamReaderSettings->setWindowTitle(QCoreApplication::translate("BinaryStreamReaderSettings", "Form", nullptr));
        label_4->setText(QCoreApplication::translate("BinaryStreamReaderSettings", "Number Of Channels:", nullptr));
#if QT_CONFIG(tooltip)
        spNumOfChannels->setToolTip(QCoreApplication::translate("BinaryStreamReaderSettings", "Select number of channels", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pbSkipByte->setToolTip(QCoreApplication::translate("BinaryStreamReaderSettings", "Skip 1 byte while reading to correct the alignment", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSkipByte->setText(QCoreApplication::translate("BinaryStreamReaderSettings", "Skip Byte", nullptr));
#if QT_CONFIG(tooltip)
        pbSkipSample->setToolTip(QCoreApplication::translate("BinaryStreamReaderSettings", "Skip reading 1 sample while reading to shift channel order", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSkipSample->setText(QCoreApplication::translate("BinaryStreamReaderSettings", "Skip Sample", nullptr));
        label_5->setText(QCoreApplication::translate("BinaryStreamReaderSettings", "Number Type:", nullptr));
        label_6->setText(QCoreApplication::translate("BinaryStreamReaderSettings", "Endianness:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BinaryStreamReaderSettings: public Ui_BinaryStreamReaderSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARYSTREAMREADERSETTINGS_H
