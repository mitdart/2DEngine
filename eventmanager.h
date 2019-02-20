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
    Binder(int number, void function())
    {
        this->actionCode = number;
        this->action = function;
    }

};


class EventManager
{
private:



public:

    EventHandler* Handler;
    EventManager();

    int currentKeyCode;
    void Execute(EventHandler Handler, sf::RenderWindow window);
    std::vector<Binder> ActionBinder;









};


#endif // EVENTMANAGER_H
