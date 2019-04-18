#ifndef GAMEOBJECTCOMPONENT_H
#define GAMEOBJECTCOMPONENT_H
#include <string>


namespace engine
{
    class GameObjectComponent
    {
    public:

        class GameObject;

        GameObjectComponent();

        std::string componentName = "";
        GameObject* parentObject = 0;

    };
}
#endif // GAMEOBJECTCOMPONENT_H
