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
    this->dataStorage->gameObjects.insert({"nagibator228",  new TextObject("arial.ttf")});
    auto it = this->dataStorage->gameObjects.find("nagibator228");
    it->second->renderer = new Renderer(new sf::Text(static_cast<TextObject&>(*it->second).text,
                                                    static_cast<TextObject&>(*it->second).font,
                                                    static_cast<TextObject&>(*it->second).size));
    static_cast<sf::Text&>(*it->second->renderer->mesh).setPosition(0,0);

}



void Application::AppRun()
{
    this->selfInit();
    auto it = this->dataStorage->gameObjects.find("nagibator228");


    while(this->drawManager->window.isOpen())
    {
        this->drawManager->window.clear();

        this->eventManager->Execute();
        //this->drawManager->drawAllObjects();



        this->drawManager->drawObject(*it->second->renderer->mesh);
        this->drawManager->window.display();
    }


}
