#include "logicsmanager.h"


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

    void LogicsManager::addScript(BasicScript* script)
    {
        notStartedScripts.push_back(script);
        allScripts.push_back(script);
    }

    void LogicsManager::removeScript(BasicScript* script)
    {
        allScripts.erase(remove(allScripts.begin(), allScripts.end(), script), allScripts.end());
    }

}
