#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H
#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include <functional>
#include <map>


class EventManager
{
private:



public:


    EventManager();

    void Execute();

    typedef void (EventHandler::*Action)(void);
    std::map<int, Action> ActionBinder = {{sf::Event::KeyPressed, &EventHandler::TransformText},
                                          {sf::Event::Closed , &EventHandler::EHClose},
                                          {sf::Event::KeyReleased, &EventHandler::pass}};





};


#endif // EVENTMANAGER_H

