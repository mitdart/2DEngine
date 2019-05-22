
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
    void collide(engine::CollisionDetails& details);
    std::vector<sf::Texture> animation;
};

class EnemyScript : public engine::BasicScript
{
public:
    double timeCounter = 0;
    void update();
    void start();
    void collide(engine::CollisionDetails& details);

};


void TestScript::update()
{
    parentObject->getComponent<PhysicalBody>()->velocity = sf::Vector2f(0, 0);

    if (_2DEngine::KeyboardInput::getKey(KeyCode::A))
    {
        parentObject->getComponent<PhysicalBody>()->velocity.x = -300;
    }


    if (_2DEngine::KeyboardInput::getKey(KeyCode::D))
    {

        parentObject->getComponent<PhysicalBody>()->velocity.x = 300;
        timeCounter += _2DEngine::Time::deltaTime;
        int spriteCounter = timeCounter*32;
        if (spriteCounter > animation.size() - 1)
        {
            timeCounter = 0;
            spriteCounter = 0;
        }
        parentObject->getComponent<Renderer>()->setSprite(animation[spriteCounter]);
    }

    if (_2DEngine::KeyboardInput::getKey(KeyCode::W))
    {
        parentObject->getComponent<PhysicalBody>()->velocity.y = -300;
    }

    if (_2DEngine::KeyboardInput::getKey(KeyCode::S))
    {
        parentObject->getComponent<PhysicalBody>()->velocity.y = 300;
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
        parentObject->addComponent<PhysicalBody>();
        parentObject->getComponent<RectCollider>()->isDynamic = false;

}


void TestScript::collide(engine::CollisionDetails& details)
{

}

void EnemyScript::update()
{
    if(parentObject->position.x  > 600 || parentObject->position.x < 0)
    {

        parentObject->getComponent<PhysicalBody>()->velocity.x = -parentObject->getComponent<PhysicalBody>()->velocity.x;

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
    parentObject->addComponent<PhysicalBody>();
    parentObject->getComponent<PhysicalBody>()->velocity = sf::Vector2f(150, 0);
 }
void EnemyScript::collide(engine::CollisionDetails& details)
{
    parentObject->getComponent<PhysicalBody>()->velocity = - parentObject->getComponent<PhysicalBody>()->velocity;
}


#endif // PICTURESCRIPT_H
