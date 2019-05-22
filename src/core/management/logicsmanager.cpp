#include "logicsmanager.h"
#include "../engine.h"

namespace engine
{

    LogicsManager::LogicsManager()
    {
        eventManager = new EventManager;
    }

    void LogicsManager::updateLogics()
    {


        eventManager->catchEvents();

        startAllScripts();
        updateAllScripts();

        eventManager->clearEvents();
    }

    void LogicsManager::startAllScripts()
    {
        for (auto script : notStartedScripts)
            script->start();
        notStartedScripts.clear();
    }

    void LogicsManager::updateAllScripts()
    {
        for (auto script : allScripts)
            script->update();
    }

    void LogicsManager::collideObject(GameObject* object, CollisionDetails& details)
    {
        for (auto script : allScripts)
                    if (script->parentObject == object)
                    {
                        script->collide(details);
                    }
    }

    void LogicsManager::addScript(BasicScript* script)
    {
        notStartedScripts.push_back(script);
        allScripts.push_back(script);
    }

    void LogicsManager::removeScript(BasicScript* script)
    {
        allScripts.clear();
    }

}
