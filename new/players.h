#ifndef PLAYER_H
#define PLAYER_H
#include<QString>
#include "plane.h"
#include<QQueue>

class Player{
public:
    bool is_AI = 0;
    QString m_color = "";
    QString m_name = "";
    Plane * m_planes[4] = {NULL, NULL, NULL, NULL};
    int finish_planes = 0;
    bool finished = false;

    Player(const QString &name, const QString &color);
    void finishPlane();
};



extern QString Players[4];
extern bool hasset;
extern int playerNumber;
extern QQueue<QString> * finish_queue;
extern int sizes;

#endif // PLAYER_H
