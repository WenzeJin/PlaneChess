#include "settings.h"
#include "ui_settings.h"
#include "players.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    if(hasset){
        ui->nameBox_0->setCurrentText(Players[0]);
        ui->nameBox_1->setCurrentText(Players[1]);
        ui->nameBox_2->setCurrentText(Players[2]);
        ui->nameBox_3->setCurrentText(Players[3]);
    }
    this->setWindowTitle("玩家设置");
    ui->playernum->setValue(playerNumber);
}

Settings::~Settings()
{
    delete ui;
    this->hide();
    pt->show();
}

void Settings::on_applyButton_clicked()
{
    Players[0] = ui->nameBox_0->currentText();
    Players[1] = ui->nameBox_1->currentText();
    Players[2] = ui->nameBox_2->currentText();
    Players[3] = ui->nameBox_3->currentText();
    hasset = true;
    for(int i = 0; i < playerNumber; i ++){
        if(Players[i] == "--请输入玩家昵称或者选择电脑玩家--") hasset = false;
    }
    this->hide();
    pt->show();
    delete this;
}


void Settings::on_playernum_textChanged(const QString &arg1)
{
    //根据玩家的数量启用相应的复选框
    if(arg1 == "2"){
        playerNumber = 2;
        ui->nameBox_0->setEnabled(true);
        ui->nameBox_1->setEnabled(true);
        ui->nameBox_2->setEnabled(false);
        ui->nameBox_3->setEnabled(false);
    }
    else if(arg1 == "3"){
        playerNumber = 3;
        ui->nameBox_0->setEnabled(true);
        ui->nameBox_1->setEnabled(true);
        ui->nameBox_2->setEnabled(true);
        ui->nameBox_3->setEnabled(false);
    }
    else if(arg1 == "4"){
        playerNumber = 4;
        ui->nameBox_0->setEnabled(true);
        ui->nameBox_1->setEnabled(true);
        ui->nameBox_2->setEnabled(true);
        ui->nameBox_3->setEnabled(true);
    }
}

