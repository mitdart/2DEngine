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
    _2DEngine::findObject("player")->addComponent<TestScript>();



    //creation enemy object
    _2DEngine::createObject("enemyFirst");
    sf::Texture enemyFirstTexture;
    enemyFirstTexture.loadFromFile("enemy.png");
    _2DEngine::findObject("enemyFirst")->addComponent<Renderer>();
    _2DEngine::findObject("enemyFirst")->getComponent<Renderer>()->setSprite(enemyFirstTexture);


}



void Application::appRun()
{
    _2DEngine::Engine::instance()->selfInit();
    createObjects();
    _2DEngine::Engine::instance()->engineRun();

}
