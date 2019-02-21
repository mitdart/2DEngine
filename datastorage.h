#ifndef DATASTORAGE_H
#define DATASTORAGE_H
#include <SFML/Graphics.hpp>
#include <fstream>
#include "gameobject.h"

class DataStorage
{

public:

    DataStorage();
    std::string AppText = "";
    std::string TmpText = "";
    sf::Font font;
    std::map<std::string, GameObject> gameObjects;



};

#endif // DATASTORAGE_H
