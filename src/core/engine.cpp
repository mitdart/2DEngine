#include "engine.h"
#include <iostream>
#include <iterator>

namespace engine
{

    Engine* Engine::ex_instance = 0;

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
        this->logicsManager = new LogicsManager();

    }

    void Engine::engineRun()
    {
        while (drawManager->getWindow()->isOpen())
        {
            logicsManager->updateLogics();
            drawManager->drawAllObjects();
            Time::updateTime();
        }

    }
}
