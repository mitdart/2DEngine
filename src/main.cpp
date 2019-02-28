#include <iostream>
#include <SFML/Graphics.hpp>
#include "datastorage.h"
#include "drawmanager.h"
#include "eventhandler.h"
#include "eventmanager.h"
#include "application.h"
#include <map>

Application* Application::ex_instance = 0;


int main()
{
    Application app;
    app.AppRun();
    return 0;
}
