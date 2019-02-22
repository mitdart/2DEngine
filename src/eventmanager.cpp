#include "eventmanager.h"
#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include <iostream>
#include <algorithm>


EventManager::EventManager()
{

}



void EventManager::Execute()
{

    sf::Event event;
    while(eventHandler->drawManager->window->pollEvent(event))
    {

        auto action = (ActionBinder.find(event.type));
        if (action != ActionBinder.end())
        {
            (eventHandler->*action->second)();
        }

    }

}
