#include "gamefinish.h"
#include "ui_gamefinish.h"
#include "players.h"

GameFinish::GameFinish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameFinish)
{
    ui->setupUi(this);
    Initialize();
    this->setWindowTitle("积分板");
}

GameFinish::~GameFinish()
{
    delete ui;
    this->hide();
    pt->show();
}

void GameFinish::Initialize(){
    ui->Rank_1->setText("第一名");
    ui->Rank_2->setText("第二名");
    ui->Name_1->setText(finish_queue->dequeue());
    ui->Name_2->setText(finish_queue->dequeue());
    ui->Rank_3->setText("");
    ui->Rank_4->setText("");
    ui->Name_3->setText("");
    ui->Name_4->setText("");
    if(playerNumber == 3 || playerNumber == 4){
        ui->Rank_3->setText("第三名");
        ui->Name_3->setText(finish_queue->dequeue());
    }
    if(playerNumber == 4){
        ui->Rank_4->setText("第四名");
        ui->Name_4->setText(finish_queue->dequeue());
    }
}

void GameFinish::on_pushButton_clicked()
{
    this->hide();
    pt->show();
    delete this;
}

