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

        (eventHandler->*ActionBinder.find(event.type)->second)();

    }

}
