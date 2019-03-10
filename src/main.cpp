#include <iostream>
#include <SFML/Graphics.hpp>
#include "application.h"


Application* Application::ex_instance = 0;


int main()
{

    Application::instance()->AppRun();
    return 0;
}
