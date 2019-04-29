#include "renderer.h"
#include "../engine.h"

namespace engine
{
    void Renderer::draw(sf::RenderWindow* window)
    {
        sf::Vector2u textureSize = texture.getSize();
        sprite.setPosition(parentObject->position.x - textureSize.x/2, parentObject->position.y - textureSize.y/2);
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
