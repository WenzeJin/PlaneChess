#ifndef STANDARD_H
#define STANDARD_H

#include <QWidget>
#include "widget.h"
#include "players.h"
#include <QProgressBar>
#include <QQueue>

namespace Ui {
class Standard;
}

class Standard : public QWidget
{
    Q_OBJECT

public:
    explicit Standard(QWidget *parent = nullptr);
    ~Standard();
    Widget * pt = NULL;
    void disableDeveloper();

private slots:
    void on_pushButton_clicked();

    void on_diceButton_clicked();

    void on_displayButton_clicked();

    void on_applyButton_clicked();

    void on_cheatButton_clicked();

private:
    Ui::Standard *ui;
    Player * gamePlayer[4];
    void Initialize();
    void gameStop();

    //棋盘相关的变量声明
    Place * BLport[4], * RDport[4], * YLport[4], * GRport[4];
    Place * maintrack[52], * BLtrack[7], * RDtrack[7], * YLtrack[7], * GRtrack[7];
    int BLport_pos[4][2] = {{560,60}, {610,60},
                            {560,120}, {610,120}};
    int RDport_pos[4][2] = {{560,570}, {610,570},
                            {560,630}, {610,630}};
    int YLport_pos[4][2] = {{60,60}, {110,60},
                            {60,120}, {110,120}};
    int GRport_pos[4][2] = {{60,570}, {110,570},
                            {60,630}, {110,630}};
    int maintrack_pos[52][2] = {{374,58},{410,58},{450,72},{467,113},{467,152},{452,191},
                                {484,227},{524,210},{561,210},{600,228},{614,268},{614,306},{614,344},
                                {614,380},{614,418},{600,460},{560,480},{524,480},{485,460},{450,494},
                                {467,536},{467,573},{451,614},{410,630},{374,630},{335,630},{299,630},
                                {261,630},{220,615},{204,573},{203,535},{220,490},{187,460},{146,476},
                                {110,477},{70,460},{56,418},{56,381},{56,343},{56,304},{56,269},
                                {70,230},{110,210},{146,210},{187,230},{220,190},{203,153},{203,113},
                                {220,70},{260,60},{300,60},{336,60}};
    int BLtrack_pos[7][2] = {{336,113},{336,150},{336,190},{336,230},{336,266},{336,310},{336,344}};
    int RDtrack_pos[7][2] = {{561,344},{523,344},{488,344},{450,344},{410,344},{369,344},{336,344}};
    int YLtrack_pos[7][2] = {{111,344},{148,344},{186,344},{223,344},{259,344},{303,344},{336,344}};
    int GRtrack_pos[7][2] = {{336,574},{336,535},{336,497},{336,460},{336,420},{336,380},{336,344}};

    //游戏逻辑相关属性声明
    int finish_players = 0;
    QLabel * finish_labels[4];
    QProgressBar * progress[4];
    int currplayer_index;
    bool diceused = false;
    bool takeoffTurn = false;
    int dicenum;
    bool canskip = false;

    //决定某个飞机移动方式的方法
    int available(Plane * plane);
    void m_sleep(int time);
    void kickout(Place * place);
    Place * findParking(const QString &color);

    //电脑回合的操作
    void AI_taketurn(int index);
    void SB_taketurn(int index, bool AI);
};

#endif // STANDARD_H
