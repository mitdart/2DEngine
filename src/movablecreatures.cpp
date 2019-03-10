#include "movablecreatures.h"

MovableCreatures::MovableCreatures()
{

}


MovableCreatures::movement()
{
    if (MovableCreatures.speed.x > 0.0001)
    {
        MovableCreatures.coordinate.x += MovableCreatures.speed.module;
    }
    if (MovableCreatures.speed.y > 0.0001)
    {
        MovableCreatures.coordinate.y += MovableCreatures.speed.module;
    }
    if (MovableCreatures.speed.x < -0.0001)
    {
        MovableCreatures.coordinate.x -= MovableCreatures.speed.module;
    }
    if (MovableCreatures.speed.y < -0.0001)
    {
        MovableCreatures.coordinate.y -= MovableCreatures.speed.module;
    }
}
