#ifndef CREATURES_H
#define CREATURES_H
#include "gameobject.h"

class Creatures: public GameObject
{
public:
    Creatures();
    sf::Texture texture;
};

#endif // CREATURES_H
