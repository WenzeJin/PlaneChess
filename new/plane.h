#ifndef PLANE_H
#define PLANE_H
#include <QString>
#include <QLabel>
#include "place.h"

class Plane
{
public:
    QString m_color;
    QString m_name;
    bool is_finished = false;
    void move(bool forward);
    void jump();
    void fly();
    QLabel * m_label = NULL;
    Place * m_place = NULL;
    Plane(const QString &name, const QString &color, Place * place, QLabel * label);
};

#endif // PLANE_H
