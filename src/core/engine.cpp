#include "engine.h"
#include <iostream>
#include <iterator>


Engine::Engine()
{
}

Engine* Engine::instance()
{
    if (!ex_instance)
    {
        ex_instance = new Engine();
    }

    return ex_instance;

}
void Engine::selfInit()
{
    this->drawManager = new DrawManager();
    this->dataStorage = new DataStorage();
    this->eventManager = new EventManager();

}

void Engine::engineRun()
{
    this->selfInit();
    while(this->drawManager->window.isOpen())
    {
        this->eventManager->Execute();
        this->drawManager->drawAllObjects();
    }

}
