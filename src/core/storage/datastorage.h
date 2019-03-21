#ifndef DATASTORAGE_H
#define DATASTORAGE_H
#include <SFML/Graphics.hpp>
#include <fstream>
#include "../objects/gameobject.h"





class DataStorage
{
public:
    DataStorage();
    std::map<std::string, GameObject*> gameObjects;
};

#endif // DATASTORAGE_H
