/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QSpinBox *playernum;
    QComboBox *nameBox_0;
    QComboBox *nameBox_1;
    QComboBox *nameBox_2;
    QComboBox *nameBox_3;
    QPushButton *applyButton;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(400, 300);
        QFont font;
        font.setFamilies({QString::fromUtf8("Heiti SC")});
        Settings->setFont(font);
        verticalLayoutWidget = new QWidget(Settings);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 40, 281, 194));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(verticalLayoutWidget);
        label1->setObjectName("label1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Heiti SC")});
        font1.setBold(true);
        label1->setFont(font1);

        verticalLayout->addWidget(label1);

        playernum = new QSpinBox(verticalLayoutWidget);
        playernum->setObjectName("playernum");
        playernum->setFont(font1);
        playernum->setMinimum(2);
        playernum->setMaximum(4);
        playernum->setValue(4);

        verticalLayout->addWidget(playernum);

        nameBox_0 = new QComboBox(verticalLayoutWidget);
        nameBox_0->addItem(QString());
        nameBox_0->addItem(QString());
        nameBox_0->setObjectName("nameBox_0");
        nameBox_0->setFont(font1);
        nameBox_0->setEditable(true);

        verticalLayout->addWidget(nameBox_0);

        nameBox_1 = new QComboBox(verticalLayoutWidget);
        nameBox_1->addItem(QString());
        nameBox_1->addItem(QString());
        nameBox_1->setObjectName("nameBox_1");
        nameBox_1->setFont(font1);
        nameBox_1->setEditable(true);

        verticalLayout->addWidget(nameBox_1);

        nameBox_2 = new QComboBox(verticalLayoutWidget);
        nameBox_2->addItem(QString());
        nameBox_2->addItem(QString());
        nameBox_2->setObjectName("nameBox_2");
        nameBox_2->setFont(font1);
        nameBox_2->setEditable(true);

        verticalLayout->addWidget(nameBox_2);

        nameBox_3 = new QComboBox(verticalLayoutWidget);
        nameBox_3->addItem(QString());
        nameBox_3->addItem(QString());
        nameBox_3->setObjectName("nameBox_3");
        nameBox_3->setFont(font1);
        nameBox_3->setEditable(true);

        verticalLayout->addWidget(nameBox_3);

        applyButton = new QPushButton(Settings);
        applyButton->setObjectName("applyButton");
        applyButton->setGeometry(QRect(150, 250, 100, 32));
        applyButton->setFont(font1);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Form", nullptr));
        label1->setText(QCoreApplication::translate("Settings", "\350\257\267\351\200\211\346\213\251\347\216\251\345\256\266\344\272\272\346\225\260", nullptr));
        nameBox_0->setItemText(0, QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        nameBox_0->setItemText(1, QCoreApplication::translate("Settings", "**\347\224\265\350\204\221\347\216\251\345\256\266**", nullptr));

        nameBox_0->setCurrentText(QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        nameBox_1->setItemText(0, QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        nameBox_1->setItemText(1, QCoreApplication::translate("Settings", "**\347\224\265\350\204\221\347\216\251\345\256\266**", nullptr));

        nameBox_1->setCurrentText(QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        nameBox_2->setItemText(0, QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        nameBox_2->setItemText(1, QCoreApplication::translate("Settings", "**\347\224\265\350\204\221\347\216\251\345\256\266**", nullptr));

        nameBox_2->setCurrentText(QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        nameBox_3->setItemText(0, QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        nameBox_3->setItemText(1, QCoreApplication::translate("Settings", "**\347\224\265\350\204\221\347\216\251\345\256\266**", nullptr));

        nameBox_3->setCurrentText(QCoreApplication::translate("Settings", "--\350\257\267\350\276\223\345\205\245\347\216\251\345\256\266\346\230\265\347\247\260\346\210\226\350\200\205\351\200\211\346\213\251\347\224\265\350\204\221\347\216\251\345\256\266--", nullptr));
        applyButton->setText(QCoreApplication::translate("Settings", "\345\272\224\347\224\250\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
