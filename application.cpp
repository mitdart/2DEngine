#include "application.h"

Application::Application()
{

}



void Application::AppRun()
{
    sf::RenderWindow window(sf::VideoMode(1600, 900), "Hackertyper");
    DataStorage dataStorage;
    DrawManager drawManager;
    drawManager.dataStorage = &dataStorage;

    EventHandler eventHandler;
    eventHandler.drawManager = &drawManager;
    EventManager eventManager;
    eventManager.eventHandler = &eventHandler;

    while(window.isOpen())
    {
        eventManager.Execute();
        window.display();
    }

}
