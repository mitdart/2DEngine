#ifndef APPLICATION_H
#define APPLICATION_H
#include <SFML/Graphics.hpp>
#include "datastorage.h"
#include "drawmanager.h"
#include "eventhandler.h"
#include "eventmanager.h"



class Application
{

public:
    static Application* instance();
    void selfInit();
    DataStorage* dataStorage;
    DrawManager* drawManager;
    EventManager* eventManager;
    EventHandler* eventHandler;
    Application();
    void AppRun();

private:
    static Application* ex_instance;
};

#endif // APPLICATION_H
