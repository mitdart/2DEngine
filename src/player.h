#ifndef PLAYER_H
#define PLAYER_H
#include "movablecreatures.h"

struct Status
{
    bool alive = true;
    bool playable = true;
};

class Player: public MovableCreatures
{
public:
    Player();
    Status status;
    void control();
};

#endif // PLAYER_H
