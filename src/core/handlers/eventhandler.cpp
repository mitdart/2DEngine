#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include "../management/drawmanager.h"
#include "../storage/datastorage.h"
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
    static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).text += "#";
    delete Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh;
    Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh = new sf::Text(static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).text,
                                                                                                        static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).font,
                                                                                                        static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).size);
    static_cast<sf::Text&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh).setPosition(0,0);

}

