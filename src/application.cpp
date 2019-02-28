#include "application.h"
#include <iostream>


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



void Application::AppRun()
{

    while(drawManager->window.isOpen())
    {
        eventManager->Execute();

        drawManager->drawObject();
        drawManager->window.display();

    }


}
