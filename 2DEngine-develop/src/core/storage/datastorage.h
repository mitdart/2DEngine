#ifndef DATASTORAGE_H
#define DATASTORAGE_H
#include <SFML/Graphics.hpp>
#include <fstream>
#include "../objects/gameobject.h"
#include "../objects/textobject.h"
#include "../objects/picture.h"




class DataStorage
{

public:

    DataStorage();

    std::map<std::string, GameObject*> gameObjects;


    //std::vector<GameObject*> objects;

};

#endif // DATASTORAGE_H
