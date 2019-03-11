#include "application.h"
#include <iostream>
#include <iterator>


Application::Application()
{
}

Application* Application::instance()
{
    if (!ex_instance)
    {
        ex_instance = new Application();
    }

    return ex_instance;

}
void Application::selfInit()
{
    this->drawManager = new DrawManager();
    this->dataStorage = new DataStorage();

    this->eventHandler = new EventHandler();
    this->eventManager = new EventManager();

}

void Application::applicationInit()
{
    //TextInit
    this->dataStorage->gameObjects.insert({"textik", new TextObject("arial.ttf")});
    this->dataStorage->gameObjects.find("textik")->second->renderer = new Renderer(new sf::Text(static_cast<TextObject&>(*this->dataStorage->gameObjects.find("textik")->second).text,
                                                                                                static_cast<TextObject&>(*this->dataStorage->gameObjects.find("textik")->second).font,
                                                                                                static_cast<TextObject&>(*this->dataStorage->gameObjects.find("textik")->second).size));
    static_cast<sf::Text&>(*this->dataStorage->gameObjects.find("textik")->second->renderer->mesh).setPosition(0,0);

    //LogoInit
    this->dataStorage->gameObjects.insert({"picture", new Picture("logo.png")});
    auto it = this->dataStorage->gameObjects.find("picture");
    it->second->renderer = new Renderer(new sf::Sprite(static_cast<Picture&>(*this->dataStorage->gameObjects.find("picture")->second).texture));
    static_cast<sf::Text&>(*this->dataStorage->gameObjects.find("picture")->second->renderer->mesh).setPosition(0,0);
}


void Application::AppRun()
{

    this->selfInit();
    this->applicationInit();
    while(this->drawManager->window.isOpen())
    {
        this->eventManager->Execute();
        this->drawManager->drawAllObjects();
    }


}
