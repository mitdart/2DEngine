#include "application.h"
#include <iostream>
#include <iterator>


Application::Application()
{
}

Application* Application::instance()
{
    if (!ex_instance)
    {
        ex_instance = new Application();
    }

    return ex_instance;

}
void Application::selfInit()
{
    this->drawManager = new DrawManager();
    this->dataStorage = new DataStorage();

    this->eventHandler = new EventHandler();
    this->eventManager = new EventManager();
    this->dataStorage->gameObjects.insert({"nagibator228",  TextObject("arial.ttf")});// <<<<<------ Здесь создаётся локальный экземпляр объекта, потокрый после выполнения selfInit благополучно умирает.
    auto it = this->dataStorage->gameObjects.find("nagibator228");
    it->second.renderer = new Renderer(new sf::Text(static_cast<TextObject&>(it->second).text,
                                                    static_cast<TextObject&>(it->second).font,
                                                    static_cast<TextObject&>(it->second).size));
    static_cast<sf::Text&>(*it->second.renderer->mesh).setPosition(0,0);
}



void Application::AppRun()
{

    this->selfInit();
    //
    sf::Font font;
    font.loadFromFile("arial.ttf");

    sf::Text text("TmpText", font, 20);

    text.setOutlineColor(sf::Color::Red);
    text.setFillColor(sf::Color::Red);

    text.setPosition(0, 0);
    //

    auto it = this->dataStorage->gameObjects.find("nagibator228");

    std::cout << typeid(*it->second.renderer->mesh).name() << std::endl;
    std::cout << typeid(text).name() << std::endl;
    //
    while(this->drawManager->window.isOpen())
    {
        this->drawManager->window.clear();

        this->eventManager->Execute();
        //this->drawManager->drawAllObjects();



        //this->drawManager->drawObject(text);
        this->drawManager->window.draw(*it->second.renderer->mesh);// <<<------ Здесь мы обращаемся к указателю на умерший объект, и случается сегфолт.
        this->drawManager->window.display();
    }


}
