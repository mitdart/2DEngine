#ifndef DATASTORAGE_H
#define DATASTORAGE_H
#include <SFML/Graphics.hpp>
#include <fstream>
#include "gameobject.h"
#include "textobject.h"



class DataStorage
{

public:

    DataStorage();

    std::map<std::string, GameObject> gameObjects;


    //std::vector<GameObject*> objects;

};

#endif // DATASTORAGE_H
