#ifndef APPLICATION_H
#define APPLICATION_H
#include <SFML/Graphics.hpp>
#include "storage/datastorage.h"
#include "management/drawmanager.h"
#include "handlers/eventhandler.h"
#include "management/eventmanager.h"



class Application
{


public:
    static Application* instance();
    void selfInit();
    void applicationInit();
    DataStorage* dataStorage;
    DrawManager* drawManager;
    EventManager* eventManager;
    EventHandler* eventHandler;
    void AppRun();

private:
    Application();

    static Application* ex_instance;
};

#endif // APPLICATION_H
