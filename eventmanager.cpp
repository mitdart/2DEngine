#include "eventmanager.h"
#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include <iostream>
#include <algorithm>


EventManager::EventManager()
{
   // ActionBinder.push_back(Binder(sf::Event::KeyPressed, Handler->TransformText));
   // ActionBinder.push_back(Binder(sf::Event::Closed, Handler->EHClose));
}



void EventManager::Execute(EventHandler Handler, sf::RenderWindow window)
{

    sf::Event event;
    void (*action)();
    while(window.pollEvent(event))
    {
        currentKeyCode = event.type;


    }

}
