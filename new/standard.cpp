#include "standard.h"
#include "ui_standard.h"
#include "players.h"
#include "plane.h"
#include <QPixmap>
#include <QTimer>
#include <QThread>
#include <QEventloop>
#include <ctime>
#include <cstdlib>
#include <QMessageBox>
#include <QDebug>
#include "gamefinish.h"

Standard::Standard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Standard)
{
    ui->setupUi(this);
    sizes = 21;
    Initialize();
    srand(time(0));
    ui->diceButton->setEnabled(false);
    ui->dicelabel->setEnabled(false);
    ui->comboBox->setEnabled(false);
    ui->displayButton->setEnabled(false);
    ui->toollabel1->setEnabled(false);
    this->setWindowTitle("标准模式");
}


Standard::~Standard()
{
    for(int i = 0; i < 4; i++){
        delete gamePlayer[i];
        delete BLport[i];
        delete RDport[i];
        delete YLport[i];
        delete GRport[i];
    }
    for(int i = 0; i < 7; i++){
        delete BLtrack[i];
        delete RDtrack[i];
        delete YLtrack[i];
        delete GRtrack[i];
    }
    for(int i = 0; i < 52; i++){
        delete maintrack[i];
    }
    finish_queue->clear();
    this->hide();
    pt->show();
    delete ui;
}

void Standard::disableDeveloper(){
    ui->cheatButton->setEnabled(false);
    ui->cheatnum->setEnabled(false);
}

void Standard::on_pushButton_clicked(){
    this->hide();
    pt->show();
    delete this;
}


void Standard::Initialize(){
    //初始化玩家信息并显示
    gamePlayer[0] = new Player(Players[0],"blue");
    gamePlayer[1] = new Player(Players[1],"red");
    gamePlayer[2] = new Player(Players[2],"yellow");
    gamePlayer[3] = new Player(Players[3],"green");
    ui->BLNameLabel->setText(gamePlayer[0]->m_name);
    ui->RDNameLabel->setText(gamePlayer[1]->m_name);
    if(playerNumber == 3 || playerNumber == 4)  ui->YLNameLabel->setText(gamePlayer[2]->m_name);
    if(playerNumber == 4)ui->GRNameLabel->setText(gamePlayer[3]->m_name);
    finish_queue->clear();
    for(int i = 0; i < 4; i ++){
        BLport[i] = new Place(BLport_pos[i]);
        RDport[i] = new Place(RDport_pos[i]);
        YLport[i] = new Place(YLport_pos[i]);
        GRport[i] = new Place(GRport_pos[i]);
        BLport[i]->is_standard = true;
        RDport[i]->is_standard = true;
        YLport[i]->is_standard = true;
        GRport[i]->is_standard = true;
    }
    for(int i = 0; i < 52; i ++){
        maintrack[i] = new Place(maintrack_pos[i]);
        maintrack[i]->is_standard = true;
    }
    for(int i = 0; i < 7; i++){
        BLtrack[i] = new Place(BLtrack_pos[i]);
        RDtrack[i] = new Place(RDtrack_pos[i]);
        YLtrack[i] = new Place(YLtrack_pos[i]);
        GRtrack[i] = new Place(GRtrack_pos[i]);
        BLtrack[i]->is_standard = true;
        RDtrack[i]->is_standard = true;
        YLtrack[i]->is_standard = true;
        GRtrack[i]->is_standard = true;
    }

    //设置机场内所有的Place出口 在标准版中 4为默认出口
    for(int i = 0; i < 4; i++){
        BLport[i]->exits[4] = maintrack[3]; //blue exit index is 3
        RDport[i]->exits[4] = maintrack[16]; //red exit index is 16
        YLport[i]->exits[4] = maintrack[42]; //yellow exit index is 42
        GRport[i]->exits[4] = maintrack[29]; //green exit index is 29
    }

    //对maintrack进行一轮默认出口的初始化 设置每一个Place的入口和出口
    for(int i = 1; i < 52; i++){
        maintrack[i]->entrance = maintrack[i - 1];
        maintrack[i - 1]->exits[4] = maintrack[i];
    }
    maintrack[51]->exits[4] = maintrack[0];
    maintrack[0]->entrance = maintrack[51];

    //对maintrack染色
    for(int i = 0; i < 52; i += 4){
        maintrack[i]->placeColor = "red";
        maintrack[i + 1]->placeColor = "green";
        maintrack[i + 2]->placeColor = "yellow";
        maintrack[i + 3]->placeColor = "blue";
    }

    //设置不同颜色的分流点
    maintrack[12]->is_interaction = true;
    maintrack[12]->exits[1] = RDtrack[0];
    RDtrack[0]->entrance = maintrack[12];

    maintrack[25]->is_interaction = true;
    maintrack[25]->exits[3] = GRtrack[0];
    GRtrack[0]->entrance = maintrack[25];

    maintrack[38]->is_interaction = true;
    maintrack[38]->exits[2] = YLtrack[0];
    YLtrack[0]->entrance = maintrack[38];

    maintrack[51]->is_interaction = true;
    maintrack[51]->exits[0] = BLtrack[0];
    BLtrack[0]->entrance = maintrack[51];

    //设置起飞点
    maintrack[6]->is_fly = true;//yellow
    maintrack[6]->fly = maintrack[18];

    maintrack[19]->is_fly = true;
    maintrack[19]->fly = maintrack[31]; //blue

    maintrack[32]->is_fly = true;
    maintrack[32]->fly = maintrack[44];//red

    maintrack[45]->is_fly = true;
    maintrack[45]->fly = maintrack[5];//green

    //设置分流赛道中每个Place的入口和出口
    for(int i = 1; i < 7; i++){
        BLtrack[i]->entrance = BLtrack[i - 1];
        BLtrack[i - 1]->exits[4] = BLtrack[i];
        RDtrack[i]->entrance = RDtrack[i - 1];
        RDtrack[i - 1]->exits[4] = RDtrack[i];
        YLtrack[i]->entrance = YLtrack[i - 1];
        YLtrack[i - 1]->exits[4] = YLtrack[i];
        GRtrack[i]->entrance = GRtrack[i - 1];
        GRtrack[i - 1]->exits[4] = GRtrack[i];
    }

    //设置终点
    BLtrack[6]->finishline = true;
    RDtrack[6]->finishline = true;
    YLtrack[6]->finishline = true;
    GRtrack[6]->finishline = true;

    //设置每个玩家的Plane
    gamePlayer[0]->m_planes[0] = new Plane("Blue Plane 0", "blue", BLport[0], ui->BLplane_0);
    gamePlayer[0]->m_planes[1] = new Plane("Blue Plane 1", "blue", BLport[1], ui->BLplane_1);
    gamePlayer[0]->m_planes[2] = new Plane("Blue Plane 2", "blue", BLport[2], ui->BLplane_2);
    gamePlayer[0]->m_planes[3] = new Plane("Blue Plane 3", "blue", BLport[3], ui->BLplane_3);

    gamePlayer[1]->m_planes[0] = new Plane("Red Plane 0", "red", RDport[0], ui->RDplane_0);
    gamePlayer[1]->m_planes[1] = new Plane("Red Plane 1", "red", RDport[1], ui->RDplane_1);
    gamePlayer[1]->m_planes[2] = new Plane("Red Plane 2", "red", RDport[2], ui->RDplane_2);
    gamePlayer[1]->m_planes[3] = new Plane("Red Plane 3", "red", RDport[3], ui->RDplane_3);

    gamePlayer[2]->m_planes[0] = new Plane("Yellow Plane 0", "yellow", YLport[0], ui->YLplane_0);
    gamePlayer[2]->m_planes[1] = new Plane("Yellow Plane 1", "yellow", YLport[1], ui->YLplane_1);
    gamePlayer[2]->m_planes[2] = new Plane("Yellow Plane 2", "yellow", YLport[2], ui->YLplane_2);
    gamePlayer[2]->m_planes[3] = new Plane("Yellow Plane 3", "yellow", YLport[3], ui->YLplane_3);

    gamePlayer[3]->m_planes[0] = new Plane("Green Plane 0", "green", GRport[0], ui->GRplane_0);
    gamePlayer[3]->m_planes[1] = new Plane("Green Plane 1", "green", GRport[1], ui->GRplane_1);
    gamePlayer[3]->m_planes[2] = new Plane("Green Plane 2", "green", GRport[2], ui->GRplane_2);
    gamePlayer[3]->m_planes[3] = new Plane("Green Plane 3", "green", GRport[3], ui->GRplane_3);

    //将每个玩家的Plane->m_label设置到起始位置
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            Plane * curr = gamePlayer[i]->m_planes[j];
            curr->m_label->setGeometry(curr->m_place->position[0], curr->m_place->position[1], sizes, sizes);
            curr->m_place->plane_nums = 1;
        }
    }

    //禁用不存在玩家的棋子
    if(playerNumber == 2){
        for(int i = 0; i < 4; i++){
            gamePlayer[2]->m_planes[i]->m_label->setEnabled(false);
            gamePlayer[3]->m_planes[i]->m_label->setEnabled(false);
        }
    }
    else if(playerNumber == 3){
        for(int i = 0; i < 4; i++){
            gamePlayer[3]->m_planes[i]->m_label->setEnabled(false);
        }
    }

    //设置终点处的已到达棋子数量显示
    finish_labels[0] = ui->BLfinished;
    finish_labels[1] = ui->RDfinished;
    finish_labels[2] = ui->YLfinished;
    finish_labels[3] = ui->GRfinished;
    progress[0] = ui->BLprogress;
    progress[1] = ui->RDprogress;
    progress[2] = ui->YLprogress;
    progress[3] = ui->GRprogress;

    //设置起始回合，提示用户开始游戏
    currplayer_index = -1;
    ui->TurnName->setText("请开始游戏");
    ui->MessageBox->setText("点击应用步数以开始游戏");

}

//掷骰子按钮按下
void Standard::on_diceButton_clicked(){
    if(!diceused){
        //动画部分
        ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_1.jpg"));
        m_sleep(200);
        ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_2.jpg"));
        m_sleep(200);
        ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_3.jpg"));
        m_sleep(200);
        ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_4.jpg"));
        m_sleep(200);
        ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_5.jpg"));
        m_sleep(200);
        ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_6.jpg"));
        m_sleep(200);
        diceused = true;
        dicenum = rand() % 6 + 1;
        switch(dicenum){
        case 1:
            ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_1.jpg"));break;
        case 2:
            ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_2.jpg"));break;
        case 3:
            ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_3.jpg"));break;
        case 4:
            ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_4.jpg"));break;
        case 5:
            ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_5.jpg"));break;
        case 6:
            ui->dicelabel->setPixmap(QPixmap(":/image/resource/dice_6.jpg"));break;
        }

        //接下来 根据掷骰子的情况修改用户可以选择走的棋子 起飞附加回合除外
        if(!takeoffTurn){
            int sum = 0;
            //如果是6只能先尝试选择选择一个棋子
            if(dicenum == 6){
                for(int i = 0; i < 4; i++){
                    Plane * curr = gamePlayer[currplayer_index]->m_planes[i];
                    if(available(curr) == 2){
                        ui->comboBox->addItem(curr->m_name);
                        sum++;
                    }
                }
            }
            //如果不是6或者没有待起飞的棋子
            if(dicenum != 6 || sum == 0){
                for(int i = 0; i < 4; i++){
                    Plane * curr = gamePlayer[currplayer_index]->m_planes[i];
                    if(available(curr) == 1){
                        ui->comboBox->addItem(curr->m_name);
                        sum++;
                    }
                }
            }
            if(sum == 0)    ui->MessageBox->setText("你没有任何棋子可以走，轮到下一玩家");
            else            ui->MessageBox->setText("请选择你要移动的棋子");
        }

    }
    else{
        QMessageBox::warning(this, "提示","你本回合已经掷过骰子了！");
    }
}


//自定义的暂停函数 用于延迟time/1000秒 代码参考CSDN
void Standard::m_sleep(int time){
    QEventLoop eventloop;
    QTimer::singleShot(time, &eventloop, SLOT(quit()));
    eventloop.exec();
}


int Standard::available(Plane * plane){
    if(plane -> is_finished)    return 0;
    int flag = 0;
    if(dicenum == 6) flag = 2;

    for(int i = 0; i < 4; i++){
        if(plane->m_place == BLport[i]) return flag;
        if(plane->m_place == RDport[i]) return flag;
        if(plane->m_place == YLport[i]) return flag;
        if(plane->m_place == GRport[i]) return flag;
    }
    return 1;
}


//寻找棋子按钮按下
void Standard::on_displayButton_clicked(){
    if(ui->comboBox->currentText() != ""){
        for(int i = 0; i < 4; i++){
            if(gamePlayer[currplayer_index]->m_planes[i]->m_name == ui->comboBox->currentText()){
                Plane * target = gamePlayer[currplayer_index]->m_planes[i];
                target->m_label->setGeometry(target->m_place->position[0] - 5, target->m_place->position[1] - 5, sizes + 10, sizes + 10);
                m_sleep(500);
                target->m_label->setGeometry(target->m_place->position[0], target->m_place->position[1], sizes, sizes);
            }
        }
    }
}


//应用步数按钮按下（核心）
void Standard::on_applyButton_clicked(){
    //第零回合的准备工作
    if(currplayer_index == -1){
        currplayer_index = 0;
        ui->diceButton->setEnabled(true);
        ui->dicelabel->setEnabled(true);
        ui->comboBox->setEnabled(true);
        ui->displayButton->setEnabled(true);
        ui->toollabel1->setEnabled(true);
        ui->TurnName->setText(gamePlayer[currplayer_index]->m_name);
        ui->MessageBox->setText("请掷骰子");
        if(gamePlayer[currplayer_index]->is_AI){
            diceused = true;
        }
        else{
            return;
        }
    }
    //判断前置工作是否完成了
    if(diceused){
        do{
            if(!gamePlayer[currplayer_index]->is_AI){
                SB_taketurn(currplayer_index, false);
                if(takeoffTurn == true) return;
            }
            else{
                AI_taketurn(currplayer_index);
            }
            //轮换玩家回合
            do{
                currplayer_index ++;
                if(currplayer_index == playerNumber) currplayer_index = 0;
            }while(gamePlayer[currplayer_index]->finished == true);
            //轮换完成之后如果只剩一名玩家那么触发游戏结束，调出显示排名的窗口
            if(finish_players == playerNumber - 1){
                finish_queue->enqueue(gamePlayer[currplayer_index]->m_name);
                gameStop();
                return;
            }
            ui->comboBox->blockSignals(true);
            ui->comboBox->clear();
            ui->comboBox->blockSignals(false);
            diceused = false;
            ui->TurnName->setText(gamePlayer[currplayer_index]->m_name);
        }while(gamePlayer[currplayer_index]->is_AI);
        ui->MessageBox->setText("请掷骰子");
    }
    else{
        QMessageBox::warning(this, "提示","请先掷骰子！");
    }
}



//挤兑与place内与当前颜色冲突的棋子：一一遍历
void Standard::kickout(Place * place){
    Plane * curr = NULL;
    for(int i = 0; i < 4; i ++){
        if(i == currplayer_index)   continue;
        for(int j = 0; j < 4; j ++){
            curr = gamePlayer[i]->m_planes[j];
            if(curr->m_place == place){
                Place * parking = findParking(curr->m_color);
                place->plane_nums --;
                curr->m_place = parking;
                curr->m_label->setGeometry(parking->position[0], parking->position[1], sizes, sizes);
                parking->plane_nums ++;
            }
        }
    }
}


//对于被挤兑的棋子，寻找机场格中合适的停靠点
Place * Standard::findParking(const QString &color){
    if(color == "blue"){
        for(int i = 0; i < 4; i ++){
            if(BLport[i]->plane_nums == 0)  return BLport[i];
        }
    }
    else if(color == "red"){
        for(int i = 0; i < 4; i ++){
            if(RDport[i]->plane_nums == 0)  return RDport[i];
        }
    }
    else if(color == "yellow"){
        for(int i = 0; i < 4; i ++){
            if(YLport[i]->plane_nums == 0)  return YLport[i];
        }
    }
    else if(color == "green"){
        for(int i = 0; i < 4; i ++){
            if(GRport[i]->plane_nums == 0)  return GRport[i];
        }
    }
    return NULL;
}


void Standard::gameStop(){
    this -> hide();
    GameFinish * board = new GameFinish();
    board->pt = pt;
    board->show();
    delete this;
}

//这是普通玩家按下应用步数按钮后应该执行的方法
void Standard::SB_taketurn(int index, bool AI){
    //明确要移动的棋子
    Plane * target = NULL;
    for(int i = 0; i < 4; i++){
        if(gamePlayer[index]->m_planes[i]->m_name == ui->comboBox->currentText()){
            target = gamePlayer[index]->m_planes[i];
        }
    }

    if(target != NULL){
        if(takeoffTurn){
            takeoffTurn = false;
        }
        else{
            //判断下个回合是否为起飞回合
            for(int i = 0; i < 4; i++){
                if(target->m_place == BLport[i]) takeoffTurn = true;
                if(target->m_place == RDport[i]) takeoffTurn = true;
                if(target->m_place == YLport[i]) takeoffTurn = true;
                if(target->m_place == GRport[i]) takeoffTurn = true;
            }
            if(takeoffTurn == true){
                if(!AI) QMessageBox::warning(this, "提示","你将使一个飞机起飞，下一回合仍然是你的回合");
                if(!AI) ui->MessageBox->setText("请再掷一次骰子使其起飞");
                ui->comboBox->blockSignals(true);
                ui->comboBox->clear();
                ui->comboBox->blockSignals(false);
                ui->comboBox->addItem(target->m_name);
                diceused = false;
                return;
            }
        }
        int back = 0;
        for(int i = 0; i < dicenum; i++){
            target->move(1);
            m_sleep(200);
            qDebug() << i << " " << target->m_place->finishline;
            if(target->m_place->finishline == true){
                back = dicenum - i - 1;
                if(back == 0){
                    //满足以上条件时 该棋子到达终点 执行与重点相关的处理命令
                    target->is_finished = true;
                    gamePlayer[index]->finishPlane();
                    if(gamePlayer[index]->finished == true){
                        finish_players++;
                        finish_queue->enqueue(gamePlayer[index]->m_name);
                    };
                    finish_labels[index]->setText(QString::asprintf("%d",gamePlayer[index]->finish_planes));
                    progress[index]->setValue(gamePlayer[index]->finish_planes);
                    target->m_label->setEnabled(false);
                }
                break;
            }
        }

        //最后，判断要不要跳格
        if(target->m_color == target->m_place->placeColor && target->m_place->is_fly == false){
            target->jump();
        }
        else{
            //要不要飞行
            target->fly();
        }
        //如果不需要回程且没有到达终点，则踢出当前区域其他色棋子
        if(back == 0 && target->is_finished == false){
            kickout(target->m_place);
        }
        //在本模式地图中，需要回程的情况下不可能挤兑其他棋子，故不考虑该情况
        for(int i = 0; i < back; i++){
            target->move(0);
            m_sleep(200);
        }
    }
}


//这是电脑玩家执行回合的方法
void Standard::AI_taketurn(int index){
    ui->diceButton->setEnabled(false);
    ui->comboBox->setEnabled(false);
    ui->displayButton->setEnabled(false);
    ui->applyButton->setEnabled(false);
    diceused = false;
    ui->MessageBox->setText("电脑玩家正在掷骰子");
    on_diceButton_clicked();
    ui->MessageBox->setText("电脑玩家正在决定");
    m_sleep(200);
    int total = ui->comboBox->count();
    ui->comboBox->setCurrentIndex(rand() % total);
    m_sleep(200);
    ui->MessageBox->setText("电脑玩家正在走子");
    SB_taketurn(index, true);

    if(takeoffTurn == true){
        ui->MessageBox->setText("电脑玩家选择起飞");
        m_sleep(200);
        ui->MessageBox->setText("电脑玩家正在掷骰子");
        on_diceButton_clicked();
        ui->MessageBox->setText("电脑玩家正在走子");
        SB_taketurn(index, true);
    }

    ui->diceButton->setEnabled(true);
    ui->comboBox->setEnabled(true);
    ui->displayButton->setEnabled(true);
    ui->applyButton->setEnabled(true);
}

void Standard::on_cheatButton_clicked()
{
    if(!diceused){
        diceused = true;
        dicenum = ui->cheatnum->value();

        //接下来 根据掷骰子的情况修改用户可以选择走的棋子 起飞附加回合除外
        if(!takeoffTurn){
            int sum = 0;
            //如果是6只能先尝试选择选择一个棋子
            if(dicenum == 6){
                for(int i = 0; i < 4; i++){
                    Plane * curr = gamePlayer[currplayer_index]->m_planes[i];
                    if(available(curr) == 2){
                        ui->comboBox->addItem(curr->m_name);
                        sum++;
                    }
                }
            }
            //如果不是6或者没有待起飞的棋子
            if(dicenum != 6 || sum == 0){
                for(int i = 0; i < 4; i++){
                    Plane * curr = gamePlayer[currplayer_index]->m_planes[i];
                    if(available(curr) == 1){
                        ui->comboBox->addItem(curr->m_name);
                        sum++;
                    }
                }
            }
            if(sum == 0)    ui->MessageBox->setText("你没有任何棋子可以走，轮到下一玩家");
            else            ui->MessageBox->setText("请选择你要移动的棋子");
        }

    }
    else{
        QMessageBox::warning(this, "提示","你本回合已经掷过骰子了！");
    }
}

