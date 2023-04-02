#include "widget.h"
#include "ui_widget.h"

#include "settings.h"
#include "players.h"
#include <QMessageBox>
#include "standard.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_SettingBt_clicked()
{
    this -> hide();
    Settings *settings = new Settings();
    settings -> pt = this;
    settings -> show();
}

void Widget::on_StartBt_clicked()
{
    if(hasset){
        this -> hide();
        Standard *game = new Standard();
        game -> pt = this;
        game -> show();
        if(!ui->developer->isChecked()){
            game->disableDeveloper();
        }
    }
    else{
        QMessageBox::warning(this, "提示","你必须先完成玩家的设置才能开始游戏！");
    }
}

