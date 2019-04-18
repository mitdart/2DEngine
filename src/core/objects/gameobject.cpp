#include "gameobject.h"
#include "../engine.h"

namespace engine
{

    GameObject::GameObject()
    {

    }

    GameObject::GameObject(std::string m_name)
    {
        name = m_name;
    }

    void GameObject::registerObjectScript(GameObjectComponent* script)
    {
        Engine::instance()->logicsManager->addScript(static_cast<BasicScript*>(script));
    }

    void GameObject::registerObjectRenderer(GameObjectComponent* renderer)
    {
        Engine::instance()->drawManager->addRenderer(static_cast<Renderer*>(renderer));
    }


    void GameObject::unregisterObjectScript(GameObjectComponent* script)
    {
        Engine::instance()->logicsManager->removeScript(static_cast<BasicScript*>(script));
    }

    void GameObject::unregisterObjectRenderer(GameObjectComponent* renderer)
    {
        Engine::instance()->drawManager->removeRenderer(static_cast<Renderer*>(renderer));
    }

}

