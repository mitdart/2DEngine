#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
#include <SFML/Graphics.hpp>


class GameObject
{
public:


    GameObject();
    std::string name;
    double x, y, dx, dy;
    int dir;
    int height, width;
    sf::Texture texture;

};

#endif // GAMEOBJECT_H
