#include "drawmanager.h"
#include <SFML/Graphics.hpp>






DrawManager::DrawManager()
{

}



void DrawManager::DrawTmpText()
{


    sf::Text text(dataStorage->TmpText, dataStorage->font, 15);

    text.setOutlineColor(sf::Color::Red);
    text.setFillColor(sf::Color::Red);

    text.setPosition(0, 0);

    window->draw(text);
}

