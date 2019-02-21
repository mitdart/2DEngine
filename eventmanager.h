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

    EventHandler* eventHandler;
    EventManager();

    void Execute();

    typedef void (EventHandler::*Action)(void);
    std::map<int, Action> ActionBinder = {{5, &EventHandler::TransformText},
                                          {0 , &EventHandler::EHClose},
                                          {6, &EventHandler::pass}};





};


#endif // EVENTMANAGER_H

