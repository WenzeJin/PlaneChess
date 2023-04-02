/********************************************************************************
** Form generated from reading UI file 'standard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARD_H
#define UI_STANDARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Standard
{
public:
    QLabel *label;
    QLabel *YLplane_2;
    QLabel *RDfinished;
    QLabel *YLplane_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *diceButton;
    QLabel *toollabel1;
    QComboBox *comboBox;
    QPushButton *displayButton;
    QPushButton *applyButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *BL;
    QLabel *BLNameLabel;
    QLabel *RD;
    QLabel *RDNameLabel;
    QLabel *YL;
    QLabel *GR;
    QLabel *GRNameLabel;
    QLabel *YLNameLabel;
    QLabel *BLplane_0;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *TurnNameLabel;
    QLabel *TurnName;
    QLabel *MessageBoxLabel;
    QLabel *MessageBox;
    QLabel *YLplane_0;
    QLabel *GRfinished;
    QLabel *RDplane_3;
    QLabel *RDplane_0;
    QLabel *BLfinished;
    QLabel *BLplane_1;
    QLabel *GRplane_0;
    QLabel *BLplane_2;
    QLabel *YLplane_1;
    QLabel *RDplane_1;
    QLabel *GRplane_3;
    QLabel *dicelabel;
    QLabel *GRplane_1;
    QLabel *GRplane_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *BLprogress;
    QProgressBar *RDprogress;
    QProgressBar *YLprogress;
    QProgressBar *GRprogress;
    QLabel *YLfinished;
    QPushButton *pushButton;
    QLabel *BLplane_3;
    QLabel *RDplane_2;
    QSpinBox *cheatnum;
    QPushButton *cheatButton;

    void setupUi(QWidget *Standard)
    {
        if (Standard->objectName().isEmpty())
            Standard->setObjectName("Standard");
        Standard->resize(1010, 702);
        Standard->setMinimumSize(QSize(1010, 702));
        Standard->setMaximumSize(QSize(1010, 702));
        QFont font;
        font.setFamilies({QString::fromUtf8("Heiti SC")});
        Standard->setFont(font);
        label = new QLabel(Standard);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 691, 701));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/standardmap.png")));
        label->setScaledContents(true);
        YLplane_2 = new QLabel(Standard);
        YLplane_2->setObjectName("YLplane_2");
        YLplane_2->setGeometry(QRect(60, 120, 21, 21));
        YLplane_2->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/YL.png")));
        YLplane_2->setScaledContents(true);
        RDfinished = new QLabel(Standard);
        RDfinished->setObjectName("RDfinished");
        RDfinished->setGeometry(QRect(380, 360, 21, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(24);
        RDfinished->setFont(font1);
        YLplane_3 = new QLabel(Standard);
        YLplane_3->setObjectName("YLplane_3");
        YLplane_3->setGeometry(QRect(110, 120, 21, 21));
        YLplane_3->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/YL.png")));
        YLplane_3->setScaledContents(true);
        verticalLayoutWidget = new QWidget(Standard);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(770, 410, 160, 164));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        diceButton = new QPushButton(verticalLayoutWidget);
        diceButton->setObjectName("diceButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Heiti SC")});
        font2.setBold(true);
        diceButton->setFont(font2);
        diceButton->setCheckable(false);
        diceButton->setAutoDefault(false);
        diceButton->setFlat(false);

        verticalLayout->addWidget(diceButton);

        toollabel1 = new QLabel(verticalLayoutWidget);
        toollabel1->setObjectName("toollabel1");
        toollabel1->setFont(font2);

        verticalLayout->addWidget(toollabel1);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName("comboBox");
        comboBox->setFont(font2);
        comboBox->setEditable(false);

        verticalLayout->addWidget(comboBox);

        displayButton = new QPushButton(verticalLayoutWidget);
        displayButton->setObjectName("displayButton");
        displayButton->setFont(font2);

        verticalLayout->addWidget(displayButton);

        applyButton = new QPushButton(verticalLayoutWidget);
        applyButton->setObjectName("applyButton");
        applyButton->setFont(font2);

        verticalLayout->addWidget(applyButton);

        formLayoutWidget = new QWidget(Standard);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(800, 110, 212, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setContentsMargins(0, 0, 0, 0);
        BL = new QLabel(formLayoutWidget);
        BL->setObjectName("BL");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Heiti SC")});
        font3.setPointSize(14);
        font3.setBold(false);
        BL->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, BL);

        BLNameLabel = new QLabel(formLayoutWidget);
        BLNameLabel->setObjectName("BLNameLabel");
        BLNameLabel->setMinimumSize(QSize(174, 0));
        BLNameLabel->setFont(font3);

        formLayout->setWidget(0, QFormLayout::FieldRole, BLNameLabel);

        RD = new QLabel(formLayoutWidget);
        RD->setObjectName("RD");
        RD->setFont(font3);

        formLayout->setWidget(1, QFormLayout::LabelRole, RD);

        RDNameLabel = new QLabel(formLayoutWidget);
        RDNameLabel->setObjectName("RDNameLabel");
        RDNameLabel->setMinimumSize(QSize(174, 0));
        RDNameLabel->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, RDNameLabel);

        YL = new QLabel(formLayoutWidget);
        YL->setObjectName("YL");
        YL->setFont(font3);

        formLayout->setWidget(2, QFormLayout::LabelRole, YL);

        GR = new QLabel(formLayoutWidget);
        GR->setObjectName("GR");
        GR->setFont(font3);

        formLayout->setWidget(3, QFormLayout::LabelRole, GR);

        GRNameLabel = new QLabel(formLayoutWidget);
        GRNameLabel->setObjectName("GRNameLabel");
        GRNameLabel->setMinimumSize(QSize(174, 0));
        GRNameLabel->setFont(font3);

        formLayout->setWidget(3, QFormLayout::FieldRole, GRNameLabel);

        YLNameLabel = new QLabel(formLayoutWidget);
        YLNameLabel->setObjectName("YLNameLabel");
        YLNameLabel->setMinimumSize(QSize(174, 0));
        YLNameLabel->setFont(font3);

        formLayout->setWidget(2, QFormLayout::FieldRole, YLNameLabel);

        BLplane_0 = new QLabel(Standard);
        BLplane_0->setObjectName("BLplane_0");
        BLplane_0->setGeometry(QRect(560, 60, 21, 21));
        BLplane_0->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/BL.png")));
        BLplane_0->setScaledContents(true);
        formLayoutWidget_2 = new QWidget(Standard);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(690, 50, 411, 62));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        TurnNameLabel = new QLabel(formLayoutWidget_2);
        TurnNameLabel->setObjectName("TurnNameLabel");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Heiti SC")});
        font4.setPointSize(14);
        font4.setBold(true);
        TurnNameLabel->setFont(font4);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, TurnNameLabel);

        TurnName = new QLabel(formLayoutWidget_2);
        TurnName->setObjectName("TurnName");
        TurnName->setMinimumSize(QSize(358, 0));
        TurnName->setFont(font4);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, TurnName);

        MessageBoxLabel = new QLabel(formLayoutWidget_2);
        MessageBoxLabel->setObjectName("MessageBoxLabel");
        MessageBoxLabel->setFont(font4);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, MessageBoxLabel);

        MessageBox = new QLabel(formLayoutWidget_2);
        MessageBox->setObjectName("MessageBox");
        MessageBox->setMinimumSize(QSize(358, 0));
        MessageBox->setFont(font4);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, MessageBox);

        YLplane_0 = new QLabel(Standard);
        YLplane_0->setObjectName("YLplane_0");
        YLplane_0->setGeometry(QRect(60, 60, 21, 21));
        YLplane_0->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/YL.png")));
        YLplane_0->setScaledContents(true);
        GRfinished = new QLabel(Standard);
        GRfinished->setObjectName("GRfinished");
        GRfinished->setGeometry(QRect(310, 380, 21, 31));
        GRfinished->setFont(font1);
        RDplane_3 = new QLabel(Standard);
        RDplane_3->setObjectName("RDplane_3");
        RDplane_3->setGeometry(QRect(610, 630, 21, 21));
        RDplane_3->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/RD.png")));
        RDplane_3->setScaledContents(true);
        RDplane_0 = new QLabel(Standard);
        RDplane_0->setObjectName("RDplane_0");
        RDplane_0->setGeometry(QRect(550, 570, 21, 21));
        RDplane_0->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/RD.png")));
        RDplane_0->setScaledContents(true);
        BLfinished = new QLabel(Standard);
        BLfinished->setObjectName("BLfinished");
        BLfinished->setGeometry(QRect(360, 300, 21, 31));
        BLfinished->setFont(font1);
        BLplane_1 = new QLabel(Standard);
        BLplane_1->setObjectName("BLplane_1");
        BLplane_1->setGeometry(QRect(610, 60, 21, 21));
        BLplane_1->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/BL.png")));
        BLplane_1->setScaledContents(true);
        GRplane_0 = new QLabel(Standard);
        GRplane_0->setObjectName("GRplane_0");
        GRplane_0->setGeometry(QRect(60, 570, 21, 21));
        GRplane_0->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/GR.png")));
        GRplane_0->setScaledContents(true);
        BLplane_2 = new QLabel(Standard);
        BLplane_2->setObjectName("BLplane_2");
        BLplane_2->setGeometry(QRect(560, 120, 21, 21));
        BLplane_2->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/BL.png")));
        BLplane_2->setScaledContents(true);
        YLplane_1 = new QLabel(Standard);
        YLplane_1->setObjectName("YLplane_1");
        YLplane_1->setGeometry(QRect(110, 60, 21, 21));
        YLplane_1->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/YL.png")));
        YLplane_1->setScaledContents(true);
        RDplane_1 = new QLabel(Standard);
        RDplane_1->setObjectName("RDplane_1");
        RDplane_1->setGeometry(QRect(610, 570, 21, 21));
        RDplane_1->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/RD.png")));
        RDplane_1->setScaledContents(true);
        GRplane_3 = new QLabel(Standard);
        GRplane_3->setObjectName("GRplane_3");
        GRplane_3->setGeometry(QRect(110, 630, 21, 21));
        GRplane_3->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/GR.png")));
        GRplane_3->setScaledContents(true);
        dicelabel = new QLabel(Standard);
        dicelabel->setObjectName("dicelabel");
        dicelabel->setGeometry(QRect(800, 280, 91, 91));
        dicelabel->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/dice_1.jpg")));
        dicelabel->setScaledContents(true);
        GRplane_1 = new QLabel(Standard);
        GRplane_1->setObjectName("GRplane_1");
        GRplane_1->setGeometry(QRect(110, 570, 21, 21));
        GRplane_1->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/GR.png")));
        GRplane_1->setScaledContents(true);
        GRplane_2 = new QLabel(Standard);
        GRplane_2->setObjectName("GRplane_2");
        GRplane_2->setGeometry(QRect(60, 630, 21, 21));
        GRplane_2->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/GR.png")));
        GRplane_2->setScaledContents(true);
        verticalLayoutWidget_2 = new QWidget(Standard);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(690, 110, 111, 98));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        BLprogress = new QProgressBar(verticalLayoutWidget_2);
        BLprogress->setObjectName("BLprogress");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BLprogress->sizePolicy().hasHeightForWidth());
        BLprogress->setSizePolicy(sizePolicy);
        BLprogress->setMaximum(4);
        BLprogress->setValue(0);

        verticalLayout_2->addWidget(BLprogress);

        RDprogress = new QProgressBar(verticalLayoutWidget_2);
        RDprogress->setObjectName("RDprogress");
        sizePolicy.setHeightForWidth(RDprogress->sizePolicy().hasHeightForWidth());
        RDprogress->setSizePolicy(sizePolicy);
        RDprogress->setMaximum(4);
        RDprogress->setValue(0);

        verticalLayout_2->addWidget(RDprogress);

        YLprogress = new QProgressBar(verticalLayoutWidget_2);
        YLprogress->setObjectName("YLprogress");
        sizePolicy.setHeightForWidth(YLprogress->sizePolicy().hasHeightForWidth());
        YLprogress->setSizePolicy(sizePolicy);
        YLprogress->setMaximum(4);
        YLprogress->setValue(0);

        verticalLayout_2->addWidget(YLprogress);

        GRprogress = new QProgressBar(verticalLayoutWidget_2);
        GRprogress->setObjectName("GRprogress");
        sizePolicy.setHeightForWidth(GRprogress->sizePolicy().hasHeightForWidth());
        GRprogress->setSizePolicy(sizePolicy);
        GRprogress->setMaximum(4);
        GRprogress->setValue(0);

        verticalLayout_2->addWidget(GRprogress);

        YLfinished = new QLabel(Standard);
        YLfinished->setObjectName("YLfinished");
        YLfinished->setGeometry(QRect(290, 320, 21, 31));
        YLfinished->setFont(font1);
        pushButton = new QPushButton(Standard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(690, 10, 100, 32));
        pushButton->setFont(font2);
        BLplane_3 = new QLabel(Standard);
        BLplane_3->setObjectName("BLplane_3");
        BLplane_3->setGeometry(QRect(610, 120, 21, 21));
        BLplane_3->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/BL.png")));
        BLplane_3->setScaledContents(true);
        RDplane_2 = new QLabel(Standard);
        RDplane_2->setObjectName("RDplane_2");
        RDplane_2->setGeometry(QRect(550, 630, 21, 21));
        RDplane_2->setPixmap(QPixmap(QString::fromUtf8(":/image/resource/RD.png")));
        RDplane_2->setScaledContents(true);
        cheatnum = new QSpinBox(Standard);
        cheatnum->setObjectName("cheatnum");
        cheatnum->setGeometry(QRect(860, 670, 42, 22));
        cheatnum->setMinimum(1);
        cheatnum->setMaximum(6);
        cheatButton = new QPushButton(Standard);
        cheatButton->setObjectName("cheatButton");
        cheatButton->setGeometry(QRect(910, 670, 100, 32));

        retranslateUi(Standard);

        diceButton->setDefault(false);


        QMetaObject::connectSlotsByName(Standard);
    } // setupUi

    void retranslateUi(QWidget *Standard)
    {
        Standard->setWindowTitle(QCoreApplication::translate("Standard", "Form", nullptr));
        label->setText(QString());
        YLplane_2->setText(QString());
        RDfinished->setText(QCoreApplication::translate("Standard", "0", nullptr));
        YLplane_3->setText(QString());
        diceButton->setText(QCoreApplication::translate("Standard", "\346\216\267\351\252\260\345\255\220", nullptr));
        toollabel1->setText(QCoreApplication::translate("Standard", "\345\260\206\350\257\245\346\255\245\346\225\260\345\272\224\347\224\250\344\272\216", nullptr));
        comboBox->setCurrentText(QString());
        displayButton->setText(QCoreApplication::translate("Standard", "\345\256\203\345\234\250\345\223\252\351\207\214\357\274\237", nullptr));
        applyButton->setText(QCoreApplication::translate("Standard", "\345\272\224\347\224\250\346\255\245\346\225\260", nullptr));
        BL->setText(QCoreApplication::translate("Standard", "\350\223\235\350\211\262", nullptr));
        BLNameLabel->setText(QString());
        RD->setText(QCoreApplication::translate("Standard", "\347\272\242\350\211\262", nullptr));
        RDNameLabel->setText(QString());
        YL->setText(QCoreApplication::translate("Standard", "\351\273\204\350\211\262", nullptr));
        GR->setText(QCoreApplication::translate("Standard", "\347\273\277\350\211\262", nullptr));
        GRNameLabel->setText(QString());
        YLNameLabel->setText(QString());
        BLplane_0->setText(QString());
        TurnNameLabel->setText(QCoreApplication::translate("Standard", "Turn:", nullptr));
        TurnName->setText(QCoreApplication::translate("Standard", "TextLabel", nullptr));
        MessageBoxLabel->setText(QCoreApplication::translate("Standard", "\344\277\241\346\201\257:", nullptr));
        MessageBox->setText(QCoreApplication::translate("Standard", "TextLabel", nullptr));
        YLplane_0->setText(QString());
        GRfinished->setText(QCoreApplication::translate("Standard", "0", nullptr));
        RDplane_3->setText(QString());
        RDplane_0->setText(QString());
        BLfinished->setText(QCoreApplication::translate("Standard", "0", nullptr));
        BLplane_1->setText(QString());
        GRplane_0->setText(QString());
        BLplane_2->setText(QString());
        YLplane_1->setText(QString());
        RDplane_1->setText(QString());
        GRplane_3->setText(QString());
        dicelabel->setText(QString());
        GRplane_1->setText(QString());
        GRplane_2->setText(QString());
        YLfinished->setText(QCoreApplication::translate("Standard", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("Standard", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        BLplane_3->setText(QString());
        RDplane_2->setText(QString());
        cheatButton->setText(QCoreApplication::translate("Standard", "\346\211\247\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Standard: public Ui_Standard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARD_H
