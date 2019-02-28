#include "eventmanager.h"
#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include <iostream>
#include <algorithm>
#include "application.h"

EventManager::EventManager()
{

}



void EventManager::Execute()
{

    sf::Event event;
    while(Application::instance()->drawManager->window.pollEvent(event))
    {

        auto action = (ActionBinder.find(event.type));
        if (action != ActionBinder.end())
        {
            (Application::instance()->eventHandler->*action->second)();
        }

    }

}
