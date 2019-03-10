#include "picture.h"

Picture::Picture(std::string pathTexture)
{
    this->texture.loadFromFile(pathTexture);
}
