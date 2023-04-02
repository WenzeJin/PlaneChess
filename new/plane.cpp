#include "plane.h"
extern int sizes;

Plane::Plane(const QString &name, const QString &color, Place * place,QLabel * label)
{
    m_name = name;
    m_color = color;
    m_place = place;
    m_label = label;
    m_place->plane_nums ++;
}

void Plane::move(bool forward){
    if(forward){
        if(m_place->nextPlace(m_color) == m_place) return;
        m_place->plane_nums --;
        if(m_place->plane_nums <= 0){
            m_place->plane_nums = 0;
            m_place->planeColor = "";
        }
        m_place = m_place->nextPlace(m_color);
        m_place->planeColor = m_color;
        m_place->plane_nums ++;
        m_label->setGeometry(m_place->position[0], m_place->position[1], sizes, sizes);
    }
    else{
        if(m_place->entrance == NULL) return;
        m_place->plane_nums --;
        if(m_place->plane_nums <= 0){
            m_place->plane_nums = 0;
            m_place->planeColor = "";
        }
        m_place = m_place -> entrance;
        m_place->planeColor = m_color;
        m_place->plane_nums ++;
        m_label->setGeometry(m_place->position[0], m_place->position[1], sizes, sizes);
    }
}

void Plane::jump(){
    if(m_place->is_interaction){
        return;
    }
    move(1);
    move(1);
    move(1);
    move(1);
}

void Plane::fly(){
    if(m_place->is_fly && m_color == m_place->placeColor){
        m_place->plane_nums --;
        if(m_place->plane_nums <= 0){
            m_place->plane_nums = 0;
            m_place->planeColor = "";
            m_place = m_place->fly;
            m_place->planeColor = m_color;
            m_place->plane_nums ++;
            m_label->setGeometry(m_place->position[0], m_place->position[1], sizes, sizes);
        }
    }
}

