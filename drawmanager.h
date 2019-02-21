
#ifndef DRAWMANAGER_H
#define DRAWMANAGER_H
#include <SFML/Graphics.hpp>
#include "application.h"
#include "datastorage.h"


class DrawManager
{
public:
    DrawManager();
    Application* app;
    DataStorage* dataStorage;
    void DrawTmpText();
};

#endif // DRAWMANAGER_H
