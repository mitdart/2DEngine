#ifndef GAMEOBJECTCOMPONENT_H
#define GAMEOBJECTCOMPONENT_H
#include <string>


namespace engine
{
    class GameObject;

    class GameObjectComponent
    {
    public:
        GameObjectComponent();
        std::string name = "";
        GameObject* parentObject = 0;

    };
}
#endif // GAMEOBJECTCOMPONENT_H
