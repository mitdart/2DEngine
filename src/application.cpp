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
    this->dataStorage->gameObjects.insert({"nagibator228",  TextObject("/home/gleb/develop/tmpsource")});
    auto it = this->dataStorage->gameObjects.find("nagibator228");
    it->second.renderer = new Renderer(new sf::Text(static_cast<TextObject&>(it->second).text,
                                                    static_cast<TextObject&>(it->second).font,
                                                    static_cast<TextObject&>(it->second).size));

}



void Application::AppRun()
{
    this->selfInit();

    while(this->drawManager->window.isOpen())
    {
        this->eventManager->Execute();

        this->drawManager->drawObject();
        this->drawManager->window.display();

    }


}
