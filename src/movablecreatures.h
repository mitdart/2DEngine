#ifndef MOVABLECREATURES_H
#define MOVABLECREATURES_H

#include "gameobject.h"

struct Speed
{
    double x = 0;
    double y = 0;
    double module = 0;
};

class MovableCreatures: public GameObject
{
public:
    movablecreatures();
    Speed speed;
    movement();
};

#endif // MOVABLECREATURES_H
