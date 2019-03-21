#ifndef ENGINE_H
#define ENGINE_H
#include <SFML/Graphics.hpp>
#include "storage/datastorage.h"
#include "management/drawmanager.h"
#include "management/eventmanager.h"
#include "tools/tools.h"
#include "../application.h"






class Engine
{


public:
    static Engine* instance();
    void selfInit();
    DataStorage* dataStorage;
    DrawManager* drawManager;
    EventManager* eventManager;
    void engineRun();

private:
    Engine();
    static Engine* ex_instance;
};


#endif // ENGINE_H
