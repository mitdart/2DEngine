
#ifndef PICTURESCRIPT_H
#define PICTURESCRIPT_H
#include "../core/engine.h"

#include "SFML/Graphics.hpp"

class EmemyScript : public engine::BasicScript
{
public:
    void update();
    void start();
};

class TestScript : public engine::BasicScript
{
public:

    void update();
    void start();
    void collide(){}
};

class EnemyScript : public engine::BasicScript
{
public:
    double timeCounter = 0;
    void update();
    void start();
    void collide(){}

};


void TestScript::update()
{
    if (_2DEngine::KeyboardInput::getKey(KeyCode::A))
    {
        parentObject->position.x -= 200 * _2DEngine::Time::deltaTime;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::D))
    {
        parentObject->position.x += 200 * _2DEngine::Time::deltaTime;
    }

    if (_2DEngine::KeyboardInput::getKey(KeyCode::W))
    {
        parentObject->position.y -= 200 * _2DEngine::Time::deltaTime;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::S))
    {
        parentObject->position.y += 200 * _2DEngine::Time::deltaTime;
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


void EnemyScript::update()
{
    if(parentObject->position.x  < 600)
    {
        parentObject->position.x += 100 * _2DEngine::Time::deltaTime;
        timeCounter += _2DEngine::Time::deltaTime;
        std::cout << timeCounter << std::endl;
    }
}

void EnemyScript::start()
 {
    parentObject->setPosition(20, 20);
    sf::Texture enemyFirstTexture;
    enemyFirstTexture.loadFromFile("enemy.png");
    parentObject->addComponent<Renderer>();
    parentObject->getComponent<Renderer>()->setSprite(enemyFirstTexture);
 }



#endif // PICTURESCRIPT_H
