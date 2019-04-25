#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H
#include <SFML/Graphics.hpp>
#include <functional>
#include <map>

namespace engine
{
    class EventManager
    {
    public:
        EventManager();

        void catchEvents();
        void clearEvents();

        std::vector<sf::Event> getEventsThisType(sf::Event::EventType eventType);

    private:

        std::vector<sf::Event>  catchedEvents;

    };
}

#endif // EVENTMANAGER_H

