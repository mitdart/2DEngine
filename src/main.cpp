#include <iostream>
#include <SFML/Graphics.hpp>
#include "core/application.h"


Application* Application::ex_instance = 0;

class TextScript: public Script
{
public:
    void onKeyPressed()
        {
    //         static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).text += "#";
    //         delete Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh;
    //         Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh = new sf::Text(static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).text,
    //                                                                                                             static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).font,
    //                                                                                                             static_cast<TextObject&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second).size);
    //         static_cast<sf::Text&>(*Application::instance()->dataStorage->gameObjects.find("textik")->second->renderer->mesh).setPosition(0,0);
        }
};


int main()
{
    TextObject testText("arial.ttf");
    testText.script = new TextScript();

    Application::instance()->AppRun();
    return 0;
}
