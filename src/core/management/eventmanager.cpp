#include <SFML/Graphics.hpp>

#include <iostream>
#include <algorithm>
#include "../engine.h"
#include "eventmanager.h"

EventManager::EventManager()
{

}



void EventManager::Execute()
{

    sf::Event event;
    while(Engine::instance()->drawManager->window.pollEvent(event))
    {

        /*
        auto action = (ActionBinder.find(event.type));
        if (action != ActionBinder.end())
        {
            (Engine::instance()->eventHandler->*action->second)();
        }
        */
    }

}
