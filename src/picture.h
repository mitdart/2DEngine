#ifndef PICTURE_H
#define PICTURE_H
#include "gameobject.h"

class Picture: public GameObject
{
public:
    Picture(std::string pathTexture);
    sf::Texture texture;

};

#endif // PICTURE_H
