#ifndef RENDERER_H
#define RENDERER_H
#include <SFML/Graphics.hpp>
#include "gameobjectcomponent.h"

namespace engine
{
    class Renderer: public GameObjectComponent
    {
    public:
        sf::Sprite sprite;
        sf::Texture texture;

        void draw(sf::RenderWindow& window);
        void setSprite(sf::Texture& newTexture);
        void setTexture(sf::Texture& newTexture);

    };
}


#endif // RENDERER_H
