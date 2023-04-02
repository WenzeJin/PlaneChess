/********************************************************************************
** Form generated from reading UI file 'gamefinish.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEFINISH_H
#define UI_GAMEFINISH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameFinish
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *Rank_1;
    QLabel *Name_1;
    QLabel *Rank_2;
    QLabel *Name_2;
    QLabel *Rank_3;
    QLabel *Name_3;
    QLabel *Rank_4;
    QLabel *Name_4;
    QPushButton *pushButton;

    void setupUi(QWidget *GameFinish)
    {
        if (GameFinish->objectName().isEmpty())
            GameFinish->setObjectName("GameFinish");
        GameFinish->resize(400, 300);
        QFont font;
        font.setFamilies({QString::fromUtf8("Heiti SC")});
        GameFinish->setFont(font);
        formLayoutWidget = new QWidget(GameFinish);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(70, 40, 241, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Heiti SC")});
        font1.setBold(true);
        formLayoutWidget->setFont(font1);
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        Rank_1 = new QLabel(formLayoutWidget);
        Rank_1->setObjectName("Rank_1");
        Rank_1->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, Rank_1);

        Name_1 = new QLabel(formLayoutWidget);
        Name_1->setObjectName("Name_1");
        Name_1->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, Name_1);

        Rank_2 = new QLabel(formLayoutWidget);
        Rank_2->setObjectName("Rank_2");
        Rank_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, Rank_2);

        Name_2 = new QLabel(formLayoutWidget);
        Name_2->setObjectName("Name_2");
        Name_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, Name_2);

        Rank_3 = new QLabel(formLayoutWidget);
        Rank_3->setObjectName("Rank_3");
        Rank_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, Rank_3);

        Name_3 = new QLabel(formLayoutWidget);
        Name_3->setObjectName("Name_3");
        Name_3->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, Name_3);

        Rank_4 = new QLabel(formLayoutWidget);
        Rank_4->setObjectName("Rank_4");
        Rank_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, Rank_4);

        Name_4 = new QLabel(formLayoutWidget);
        Name_4->setObjectName("Name_4");
        Name_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, Name_4);

        pushButton = new QPushButton(GameFinish);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 220, 100, 32));
        pushButton->setFont(font1);
        pushButton->setAcceptDrops(false);

        retranslateUi(GameFinish);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(GameFinish);
    } // setupUi

    void retranslateUi(QWidget *GameFinish)
    {
        GameFinish->setWindowTitle(QCoreApplication::translate("GameFinish", "Form", nullptr));
        Rank_1->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        Name_1->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        Rank_2->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        Name_2->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        Rank_3->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        Name_3->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        Rank_4->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        Name_4->setText(QCoreApplication::translate("GameFinish", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("GameFinish", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameFinish: public Ui_GameFinish {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEFINISH_H
