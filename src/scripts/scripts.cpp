#include "scripts.h"
#include "../core/tools/tools.h"
#include "../core/tools/input.h"
#include <iostream>


void TestScript::update()
{
    if (_2DEngine::Input::getKey(KeyCode::A))
        std::cout << "Pressed Key: A" << std::endl;

    if (_2DEngine::Input::getKey(KeyCode::D))
        std::cout << "Pressed Key: D" << std::endl;

}

void TestScript::start()
 {


 }
