#include <SFML/Graphics.hpp>

#include <iostream>
#include <algorithm>
#include "../engine.h"
#include "eventmanager.h"



namespace engine
{
    EventManager::EventManager()
    {

    }



    void EventManager::catchEvents()
    {

        sf::Event event;
        while(Engine::instance()->drawManager->window.pollEvent(event))
        {

        }

    }

    void EventManager::clearEvents()
    {
        catchedEvents.clear();
    }


}
