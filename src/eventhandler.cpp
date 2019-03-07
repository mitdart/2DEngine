#include "eventhandler.h"
#include <SFML/Graphics.hpp>
#include "drawmanager.h"
#include "application.h"




EventHandler::EventHandler()
{

}



void EventHandler::EHClose()
{
    Application::instance()->drawManager->window.close();
}

void EventHandler::TransformText()
{
/*
    if (options.indicator == 0)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((Application::instance()->dataStorage->AppText)[j + options.counter*4] == *"\0")
            {
                options.indicator = 1;
                break;
            }
            else
            {
                Application::instance()->dataStorage->TmpText += (Application::instance()->dataStorage->AppText)[j + options.counter*4];
            }
        }
        if(options.indicator == 0){(options.counter)++;}
    }
    fflush(0);
*/
}

