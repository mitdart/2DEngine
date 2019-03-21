#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H
#include <SFML/Graphics.hpp>
#include <functional>
#include <map>


class EventManager
{
public:
    EventManager();

    void Execute();

private:
    /*
    typedef void (EventHandler::*Action)(void);

    std::map<int, Action> ActionBinder = {{sf::Event::KeyPressed, &EventHandler::TransformText},
                                          {sf::Event::Closed , &EventHandler::EHClose},
                                          {sf::Event::KeyReleased, &EventHandler::pass}};
    */




};


#endif // EVENTMANAGER_H

