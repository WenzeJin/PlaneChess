/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *StartBt;
    QPushButton *SettingBt;
    QLabel *label;
    QCheckBox *developer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(378, 365);
        QFont font;
        font.setFamilies({QString::fromUtf8("Heiti SC")});
        Widget->setFont(font);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(110, 200, 160, 100));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        StartBt = new QPushButton(verticalLayoutWidget);
        StartBt->setObjectName("StartBt");

        verticalLayout->addWidget(StartBt);

        SettingBt = new QPushButton(verticalLayoutWidget);
        SettingBt->setObjectName("SettingBt");

        verticalLayout->addWidget(SettingBt);

        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 120, 71, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("STHeiti")});
        font1.setPointSize(24);
        label->setFont(font1);
        developer = new QCheckBox(Widget);
        developer->setObjectName("developer");
        developer->setGeometry(QRect(290, 340, 111, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        StartBt->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        SettingBt->setText(QCoreApplication::translate("Widget", "\347\216\251\345\256\266\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\351\243\236\350\241\214\346\243\213", nullptr));
        developer->setText(QCoreApplication::translate("Widget", "\345\274\200\345\217\221\350\200\205\346\250\241\345\274\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
