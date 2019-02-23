creatures#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
#include <SFML/Graphics.hpp>





struct Coordinates
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
    Coordinates coordinate;
    Direction direction;

};

#endif // GAMEOBJECT_H
