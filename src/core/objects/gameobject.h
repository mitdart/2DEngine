#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
#include "renderer.h"
#include "basicscript.h"
#include <SFML/Graphics.hpp>





struct Position
{
    double x = 0;
    double y = 0;
};

struct Direction
{
    double x;
    double y;
};




class GameObject
{
public:
    GameObject();
    std::string name;
    Position coordinate;
    Direction direction;
    Renderer* renderer = 0;
    BasicScript* script = 0;

};

#endif // GAMEOBJECT_H
