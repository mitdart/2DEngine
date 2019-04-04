#include "picturescript.h"

void PictureScript::update()
{

}

PictureScript::PictureScript(std::string imagePath)
{
    pictureTexture.loadFromFile(imagePath);
    pictureSprite.setTexture(pictureTexture);
    pictureSprite.setPosition(0, 0);
}
