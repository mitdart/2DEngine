#include "drawmanager.h"
#include "../engine.h"
#include <SFML/Graphics.hpp>





namespace engine
{
    DrawManager::DrawManager()//: window(sf::VideoMode(1600, 900), "Example")
    {
        window = new sf::RenderWindow(sf::VideoMode(1600, 900), "Example");
    }



    void DrawManager::drawAllObjects()
    {
        window->clear();

        for (auto element : Engine::instance() -> drawManager -> allRenderers)
            {

                    element->draw(window);

            };

        window->display();
    }

    sf::RenderWindow* DrawManager::getWindow()
    {
        return window;
    }

    void DrawManager::drawObject(sf::Drawable& object)
    {
        window->draw(object);
    }


    void DrawManager::addRenderer(Renderer* renderer)
    {
        allRenderers.push_back(renderer);
    }

    void DrawManager::removeRenderer(Renderer* renderer)
    {
        allRenderers.erase(remove(allRenderers.begin(), allRenderers.end(), renderer), allRenderers.end());
    }




}
