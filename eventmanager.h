#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H
#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include <functional>
#include <vector>


struct Binder
{
    int actionCode;
    void (*action)();
    Binder(int number, void (*function)())
    {
        this->actionCode = number;
        this->action = function;
    }

};


class EventManager
{
private:



public:

    EventHandler* eventHandler;
    EventManager();

    int currentKeyCode;
    void Execute();

    typedef void (EventHandler::*Action)(void);
    std::map<int, Action> ActionBinder = {{sf::Event::KeyPressed, &EventHandler::TransformText},
                                          {sf::Event::Closed , &EventHandler::EHClose}};









};


#endif // EVENTMANAGER_H
