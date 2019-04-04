#ifndef PICTURESCRIPT_H
#define PICTURESCRIPT_H
#include "../core/objects/basicscript.h"
#include "../core/storage/datastorage.h"
#include "SFML/Graphics.hpp"

class PictureScript : public BasicScript
{
public:
    PictureScript(std::string imagePath);
    void update();
    sf::Texture pictureTexture;
    sf::Sprite pictureSprite;
};

#endif // PICTURESCRIPT_H
