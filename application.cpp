#include "application.h"
#include <iostream>


Application::Application()
{

}



void Application::AppRun()
{
    sf::RenderWindow windoww(sf::VideoMode(1600, 900), "Hackertyper");

    DataStorage dataStorage;
    DrawManager drawManager;
    drawManager.dataStorage = &dataStorage;
    drawManager.window = &windoww;
    EventHandler eventHandler;
    eventHandler.drawManager = &drawManager;
    EventManager eventManager;
    eventManager.eventHandler = &eventHandler;

    while(windoww.isOpen())
    {
        eventManager.Execute();

        windoww.clear();
        //drawManager.DrawTmpText();

        windoww.display();
    }


}
