#ifndef PLACE_H
#define PLACE_H
#include <QString>

class Place
{
public:
    bool is_interaction = false;
    QString planeColor = "None";
    int position[2] = {};
    int plane_nums = 0;
    Place * exits[5] = {NULL, NULL, NULL, NULL, NULL};
    Place * fly = NULL;
    bool is_fly = false;
    Place * entrance = NULL;
    bool finishline = false;
    bool is_standard = false;
    QString placeColor = "None";
    Place(const int pos[]);
    Place * nextPlace(const QString &color);
};

#endif // PLACE_H
