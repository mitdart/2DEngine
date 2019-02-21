#include "eventhandler.h"
#include <SFML/Graphics.hpp>

EventHandler::EventHandler()
{



}



void EventHandler::EHClose()
{
    drawManager->app->window.close();
}

void EventHandler::TransformText()
{

    if (options.indicator == 0)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((options.AppText)[j + options.counter*4] == *"\0")
            {
                options.indicator = 1;
                break;
            }
            else
            {
                drawManager->app->TmpText += (drawManager->app->AppText)[j + options.counter*4];
            }
        }
        if(options.indicator == 0){(options.counter)++;}
    }
    fflush(0);
}

