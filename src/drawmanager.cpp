#include "drawmanager.h"
#include "application.h"
#include <SFML/Graphics.hpp>






DrawManager::DrawManager():window(sf::VideoMode(1600, 900), "Example")
{
}



void DrawManager::drawAllObjects()
{

    window.clear();

    for (auto element : Application::instance() -> dataStorage -> gameObjects)
        {
            if (element.second->renderer != 0)
            {

                drawObject(*element.second->renderer->mesh);

            }
        };

    window.display();
}

void DrawManager::drawObject(sf::Drawable& object)
{
    window.draw(object);
}
