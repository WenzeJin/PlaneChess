#include "players.h"

Player::Player(const QString &name, const QString &color){
    m_color = color;
    m_name = name;
    if(m_name == "**电脑玩家**"){
        m_name = "电脑玩家派蒙";
        is_AI = 1;
    }
}

void Player::finishPlane(){
    finish_planes ++;
    if(finish_planes == 4)  finished = true;
}
