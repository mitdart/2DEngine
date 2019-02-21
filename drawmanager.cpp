#include "drawmanager.h"
#include <SFML/Graphics.hpp>






DrawManager::DrawManager()
{

}



void DrawManager::DrawTmpText()
{


    sf::Text text(app->TmpText, app->font, 15);

    text.setOutlineColor(sf::Color::Red);
    text.setFillColor(sf::Color::Red);

    text.setPosition(0, 0);

    app->window.draw(text);
}

