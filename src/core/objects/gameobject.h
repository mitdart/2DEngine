#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
#include "renderer.h"
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

class Script
{
 public:
    virtual void update() = 0;

    virtual void onKeyPressed()
    {
    }

    virtual void onScreenExit()
    {
    }

    virtual void onScreenEnter()
    {
    }
};





class GameObject
{

public:
    GameObject();
    std::string name;
    Position coordinate;
    Direction direction;
    Renderer* renderer = 0;
    Script* script = 0;
};

#endif // GAMEOBJECT_H
