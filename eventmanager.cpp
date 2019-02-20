#include "eventmanager.h"
#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include <iostream>
#include <algorithm>


EventManager::EventManager()
{
    ActionBinder.push_back(Binder(sf::Event::KeyPressed, EventHandler::transformText));
    ActionBinder.push_back(Binder(sf::Event::Closed, EventHandler::closeWindow));
}



void EventManager::Execute(EventHandler Handler, sf::RenderWindow window)
{

    sf::Event event;
    void (*action)();
    while(window.pollEvent(event))
    {
        currentKeyCode = event.type;
        for (auto element:ActionBinder)
        {

            if (element.actionCode == currentKeyCode)
            {
                action = element.action;
            }

        }

    }

}
