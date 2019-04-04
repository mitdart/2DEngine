#include <iostream>
#include <SFML/Graphics.hpp>
#include "core/engine.h"


Engine* Engine::ex_instance = 0;


int main()
{

    Engine::instance()->engineRun();
    return 0;
}
