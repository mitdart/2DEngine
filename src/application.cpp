#include "application.h"
#include "core/tools/tools.h"
#include <iostream>
#include "core/objects/gameobject.h"
#include "scripts/scripts.h"

Application::Application()
{

}


void Application::createObjects()
{
    //creation player object
    _2DEngine::createObject("player");
    sf::Texture playerTexture;
    playerTexture.loadFromFile("sprites/all.png");
    _2DEngine::findObject("player")->addComponent<Renderer>();
    _2DEngine::findObject("player")->getComponent<Renderer>()->setSprite(playerTexture);
    _2DEngine::findObject("player")->getComponent<Renderer>()->sprite.setTextureRect(sf::IntRect(45, 50, -35, 50));
    _2DEngine::findObject("player")->addComponent<TestScript>();
    _2DEngine::findObject("player")->addComponent<RectCollider>();
    _2DEngine::findObject("player")->getComponent<RectCollider>()->setCollider(-100, -100, 100, 100);
    _2DEngine::findObject("player")->getComponent<RectCollider>()->display();

    //creation enemy object
    _2DEngine::createObject("enemyFirst");
    sf::Texture enemyFirstTexture;
    enemyFirstTexture.loadFromFile("enemy.png");
    _2DEngine::findObject("enemyFirst")->addComponent<Renderer>();
    _2DEngine::findObject("enemyFirst")->getComponent<Renderer>()->setSprite(enemyFirstTexture);
    //music.play();//воспроизводим музыку

}



void Application::appRun()
{
    _2DEngine::Engine::instance()->selfInit();
    createObjects();
    _2DEngine::Engine::instance()->engineRun();

}
