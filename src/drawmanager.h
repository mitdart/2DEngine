#ifndef DRAWMANAGER_H
#define DRAWMANAGER_H
#include <SFML/Graphics.hpp>

#include "datastorage.h"


class DrawManager
{
public:
    DrawManager();
    DataStorage* dataStorage;
    sf::RenderWindow* window;
    void DrawTmpText();
};

#endif // DRAWMANAGER_H
