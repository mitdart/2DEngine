#include "scripts.h"
#include "../core/tools/tools.h"
#include "../core/tools/input.h"
#include "../core/engine.h"
#include "../core/object_components/renderer.h"
#include <iostream>


void TestScript::update()
{
    if (_2DEngine::KeyboardInput::getKey(KeyCode::A))
    {
        std::cout << "Pressed Key: A" << std::endl;
        parentObject->coordinate.x -= 1;
        int justForFun = parentObject->coordinate.x;
        justForFun %=  2;
        parentObject->getComponent<Renderer>()->sprite.setTextureRect(sf::IntRect(45*(justForFun+1), 50, -35, 50));
        std::cout << "Position.X: "<< parentObject->coordinate.x << std::endl;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::D))
    {
        std::cout << "Pressed Key: D" << std::endl;
        parentObject->coordinate.x += 1;
        int justForFun = parentObject->coordinate.x;
        justForFun %=  2;
        parentObject->getComponent<Renderer>()->sprite.setTextureRect(sf::IntRect(10*(justForFun+1), 50, 35, 50));
        std::cout << "Position.X: "<< parentObject->coordinate.x << std::endl;
    }

    if (_2DEngine::KeyboardInput::getKey(KeyCode::W))
    {
        std::cout << "Pressed Key: W" << std::endl;
        parentObject->coordinate.y -= 1;
        std::cout << "Position.Y: "<< parentObject->coordinate.y << std::endl;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::S))
    {
        std::cout << "Pressed Key: W" << std::endl;
        parentObject->coordinate.y += 1;
        std::cout << "Position.Y: "<< parentObject->coordinate.y << std::endl;
    }

}

void TestScript::start()
 {
        parentObject->setPosition(600, 0);

 }
