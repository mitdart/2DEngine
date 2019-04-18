#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
#include <vector>
#include <typeinfo>
#include "../object_components/renderer.h"
#include "../object_components/basicscript.h"
#include <iostream>
#include "../object_components/gameobjectcomponent.h"
#include <SFML/Graphics.hpp>


namespace engine
{
    struct Position
    {
        double x = 0;
        double y = 0;
    };

    struct Direction
    {
        double x;
        double y;
    };




    class GameObject
    {
    public:

        GameObject();
        GameObject(std::string m_name);

        std::string name;
        Position coordinate;
        Direction direction;
        std::vector<GameObjectComponent*> components;

        template <typename ComponentType>
        void addComponent();

        template <typename ComponentType>
        ComponentType* getComponent();

        template <typename ComponentType>
        bool hasComponent();

        void registerObjectScript(GameObjectComponent* script);
        void registerObjectRenderer(GameObjectComponent* renderer);
        void unregisterObjectScript(GameObjectComponent* script);
        void unregisterObjectRenderer(GameObjectComponent* renderer);



    };

    template <typename ComponentType>
    void GameObject::addComponent()
    {
        std::cout << "there1" << std::endl;
        ComponentType* component = new ComponentType;
        std::cout << "there2" << std::endl;
        component->componentName = typeid(ComponentType).name();
        std::cout << "there3" << std::endl;
        std::cout <<"1" <<  components.size() << std::endl;
        components.push_back(component);
        std::cout << "there4" << std::endl;

        if (std::is_base_of<BasicScript, ComponentType>())
        {
            registerObjectScript(component);
        }

        if (typeid(ComponentType).name() == typeid(Renderer).name())
        {
            registerObjectRenderer(component);
        }
    }


    template <typename ComponentType>
    ComponentType* GameObject::getComponent()
    {
       for (auto component : components)
           if (component->componentName == typeid(ComponentType).name())
           {
               ComponentType* wired = static_cast<ComponentType*>(component);
               return wired;
           }
    }

    template <typename ComponentType>
    bool GameObject::hasComponent()
    {
       for (auto component : components)
           if (component->componentName == typeid(ComponentType).name())
           {
               return true;
           }

       return false;
   }

}
#endif // GAMEOBJECT_H
