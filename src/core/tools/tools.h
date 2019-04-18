#ifndef TOOLS_H
#define TOOLS_H
#include "../objects/gameobject.h"
#include <string>



namespace engineY
{
    using namespace engine;
    void createObject(std::string name);
    void deleteObject(std::string name);
    void deleteObject(GameObject* object);
    GameObject* findObject(std::string name);

}

#endif // TOOLS_H
