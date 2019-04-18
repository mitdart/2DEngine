#include "application.h"
#include "core/tools/tools.h"
//#include "core/object_components/renderer.h"
#include <iostream>
#include "core/objects/gameobject.h"
Application::Application()
{

}

void printMap(std::map<std::string, engine::GameObject*> mapa)
{
    for (auto& elem : mapa)
    {
        std::cout << elem.second << std::endl;
    }
}

void Application::createObjects()
{
    engineY::createObject("picture");
    sf::Texture texture;
    texture.loadFromFile("logo.png");
    //std::cout << engineY::findObject("picture")->components[0]<< std::endl;
    //engineY::findObject("picture")->addComponent<Renderer>();
    //std::cout << "there" << std::endl;
    //std::cout << engineY::findObject("picture")->getComponent<Renderer>() << std::endl;
    //engineY::findObject("picture")->getComponent<Renderer>()->setSprite(texture);

}

void Application::appRun()
{
    engineY::Engine::instance()->selfInit();
    createObjects();
    engineY::Engine::instance()->engineRun();

}
