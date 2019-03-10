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

        if (event.type == 5)
        {
            //std::cout << 1<< std::endl;
            //std::cout << ActionBinder.size() << std::endl;



        }
        if (event.type == 0)
        {


            eventHandler->drawManager->window->close();
            //std::cout << 1000<< std::endl;
        }


        if ((ActionBinder.find(event.type))->first == 3)
        {
            std::cout << (ActionBinder.find(event.type))->first << std::endl;
        }
        //auto act = ActionBinder.find(event.type);
        //std::cout << act->first << std::endl;
        //std::cout << ActionBinder.size() << std::endl;
        //(eventHandler->*act->second)();

    }

}
