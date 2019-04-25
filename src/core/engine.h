#ifndef ENGINE_H
#define ENGINE_H
#include <SFML/Graphics.hpp>
#include "storage/datastorage.h"
#include "management/drawmanager.h"
#include "management/eventmanager.h"
#include "management/logicsmanager.h"
#include "tools/tools.h"
#include "../application.h"

using engine::Renderer;
using engine::BasicScript;



namespace engine
{


    class Engine
    {


    public:
        static Engine* instance();
        void selfInit();
        DataStorage* dataStorage;
        DrawManager* drawManager;
        LogicsManager* logicsManager;
        void engineRun();

    private:
        Engine();
        static Engine* ex_instance;
    };
}

#endif // ENGINE_H
