#include "application.h"
#include "core/tools/tools.h"
//#include "core/object_components/renderer.h"
#include <iostream>
#include "core/objects/gameobject.h"
#include "scripts/scripts.h"

Application::Application()
{

}


void Application::createObjects()
{
    _2DEngine::createObject("picture");
    sf::Texture texture;
    texture.loadFromFile("logo.png");
    _2DEngine::findObject("picture")->addComponent<Renderer>();
    _2DEngine::findObject("picture")->getComponent<Renderer>()->setSprite(texture);
    _2DEngine::findObject("picture")->addComponent<TestScript>();

}

void Application::appRun()
{
    _2DEngine::Engine::instance()->selfInit();
    createObjects();
    _2DEngine::Engine::instance()->engineRun();

}
