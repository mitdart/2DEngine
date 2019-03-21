#include <SFML/Graphics.hpp>

#include "../management/drawmanager.h"

#include "../application.h"




EventHandler::EventHandler()
{

}



void EventHandler::EHClose()
{
    Application::instance()->drawManager->window.close();
}

void EventHandler::TransformText()
{

//    if (options.indicator == 0)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            if ((Application::instance()->dataStorage->AppText)[j + options.counter*4] == *"\0")
//            {
//                options.indicator = 1;
//                break;
//            }
//            else
//            {
//                Application::instance()->dataStorage->TmpText += (Application::instance()->dataStorage->AppText)[j + options.counter*4];
//            }
//        }
//        if(options.indicator == 0){(options.counter)++;}
//    }
//    fflush(0);
//     static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).text += "#";
//     delete Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh;
//     Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh = new sf::Text(static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).text,
//                                                                                                         static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).font,
//                                                                                                         static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).size);
//     static_cast<sf::Text&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh).setPosition(0,0);


}

