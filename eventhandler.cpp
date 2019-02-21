#include "eventhandler.h"
#include <SFML/Graphics.hpp>
#include "drawmanager.h"

EventHandler::EventHandler()
{



}



void EventHandler::EHClose()
{
    drawManager->window->close();
}

void EventHandler::TransformText()
{

    if (options.indicator == 0)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((drawManager->dataStorage->AppText)[j + options.counter*4] == *"\0")
            {
                options.indicator = 1;
                break;
            }
            else
            {
                drawManager->dataStorage->TmpText += (drawManager->dataStorage->AppText)[j + options.counter*4];
            }
        }
        if(options.indicator == 0){(options.counter)++;}
    }
    fflush(0);
}

