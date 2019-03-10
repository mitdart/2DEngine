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
            if (element.second.renderer != 0)
            {
                //std::cout << element.second.renderer << std::endl;
                //drawObject(*(element.second).renderer->mesh);
                sf::Font font;
                font.loadFromFile("arial.ttf");

                sf::Text text("TmpText", font, 20);

                text.setOutlineColor(sf::Color::Red);
                text.setFillColor(sf::Color::Red);

                text.setPosition(0, 0);
                window.draw(text);
            }
        };

    window.display();
}

void DrawManager::drawObject(sf::Drawable& object)
{
    window.draw(object);
}
