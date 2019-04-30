
#ifndef PICTURESCRIPT_H
#define PICTURESCRIPT_H
#include "../core/engine.h"

#include "SFML/Graphics.hpp"

class TestScript : public engine::BasicScript
{
public:
    double timeCounter = 0;
    void update();
    void start();
    void collide(){}
    std::vector<sf::Texture> animation;
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
        parentObject->position.x -= 300 * _2DEngine::Time::deltaTime;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::D))
    {
        parentObject->position.x += 300 * _2DEngine::Time::deltaTime;
        timeCounter += _2DEngine::Time::deltaTime;
        int spriteCounter = timeCounter*16;
        parentObject->getComponent<Renderer>()->setSprite(animation[spriteCounter]);

        if (timeCounter > 0.44)
        {
            timeCounter = 0;
        }

    }

    if (_2DEngine::KeyboardInput::getKey(KeyCode::W))
    {
        parentObject->position.y -= 300 * _2DEngine::Time::deltaTime;
    }
    if (_2DEngine::KeyboardInput::getKey(KeyCode::S))
    {
        parentObject->position.y += 300 * _2DEngine::Time::deltaTime;
    }

}

void TestScript::start()
 {
        parentObject->setPosition(600, 0);
        sf::Texture playerTexture;
        playerTexture.loadFromFile("sprites/1.png");
        animation.push_back(playerTexture);
        playerTexture.loadFromFile("sprites/2.png");
        animation.push_back(playerTexture);
        playerTexture.loadFromFile("sprites/3.png");
        animation.push_back(playerTexture);
        playerTexture.loadFromFile("sprites/4.png");
        animation.push_back(playerTexture);
        playerTexture.loadFromFile("sprites/5.png");
        animation.push_back(playerTexture);
        playerTexture.loadFromFile("sprites/6.png");
        animation.push_back(playerTexture);
        playerTexture.loadFromFile("sprites/7.png");
        animation.push_back(playerTexture);
        playerTexture.loadFromFile("sprites/8.png");
        animation.push_back(playerTexture);

        parentObject->addComponent<Renderer>();
        parentObject->getComponent<Renderer>()->setSprite(animation[0]);
        //parentObject->getComponent<Renderer>()->sprite.setTextureRect(sf::IntRect(15, 137, 33, 35));

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

    }
}

void EnemyScript::start()
 {
    parentObject->setPosition(200, 200);
    sf::Texture enemyFirstTexture;
    enemyFirstTexture.loadFromFile("enemy.png");
    parentObject->addComponent<Renderer>();
    parentObject->getComponent<Renderer>()->setSprite(enemyFirstTexture);
    parentObject->addComponent<RectCollider>();
    parentObject->getComponent<RectCollider>()->setCollider(-100, -100, 100, 100);
    parentObject->getComponent<RectCollider>()->display();
 }



#endif // PICTURESCRIPT_H
