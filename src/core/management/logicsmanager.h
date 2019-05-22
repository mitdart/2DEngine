#ifndef LOGICSMANAGER_H
#define LOGICSMANAGER_H
#include <vector>
#include "../objects/gameobject.h"
#include "eventmanager.h"


namespace engine
{
    class LogicsManager
    {
    public:
        LogicsManager();
        void updateLogics();
        void startAllScripts();
        void updateAllScripts();
        void collideObject(GameObject* object, CollisionDetails& details);
        void addScript(BasicScript* script);
        void removeScript(BasicScript* script);

        EventManager* eventManager;
    private:
        std::vector<BasicScript*> notStartedScripts;
        std::vector<BasicScript*> allScripts;


    };
}



#endif // LOGICSMANAGER_H
