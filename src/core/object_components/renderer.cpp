#include "renderer.h"
#include "../engine.h"

namespace engine
{
    void Renderer::draw(sf::RenderWindow* window)
    {
        Engine::instance()->drawManager->drawObject(sprite);
    }

    void Renderer::setSprite(sf::Texture& newTexture)
    {
        texture = newTexture;
        sprite.setTexture(texture);

    }

    void Renderer::setTexture(sf::Texture& newTexture)
    {

        setSprite(newTexture);
    }


}