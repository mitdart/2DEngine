#include "scripts.h"
#include "../core/tools/tools.h"
#include "../core/tools/input.h"
#include "../core/engine.h"
#include <iostream>


void TestScript::update()
{
    if (_2DEngine::KeyboardInput::getKey(KeyCode::A))
    {
        parentObject->position.x -= 1;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::D))
    {
        parentObject->position.x += 1;
    }

    if (_2DEngine::KeyboardInput::getKey(KeyCode::W))
    {
        parentObject->position.y -= 1;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::S))
    {
        parentObject->position.y += 1;
    }

}

void TestScript::start()
 {
        parentObject->setPosition(600, 0);
        sf::Texture playerTexture;
        playerTexture.loadFromFile("player.png");
        parentObject->addComponent<Renderer>();
        parentObject->getComponent<Renderer>()->setSprite(playerTexture);
        parentObject->addComponent<RectCollider>();
        parentObject->getComponent<RectCollider>()->setCollider(-100, -100, 100, 100);
        parentObject->getComponent<RectCollider>()->display();
 }
