#include "creatures.h"
#include "gameobject.h"

Creatures::Creatures()
{

}

Creatures::Creatures(std::string imagePath)
{
    texture.loadFromFile(imagePath);
}
