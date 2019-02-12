#include "hackertyper.h"
#include <iostream>


HackerTyper::HackerTyper(int ScrResX, int ScrResY, std::string title)
{
    Resolution.x = ScrResX;
    Resolution.y = ScrResY;
    Title = title;
}


void HackerTyper::AppRun()
{
    sf::RenderWindow window(sf::VideoMode(Resolution.x, Resolution.y), Title);

    sf::View view( sf::FloatRect(0,0,1600,900));

    sf::Font font;
    font.loadFromFile("/home/lenovo/Files/Info Project/Hackertyper/arial.ttf");

    int i = 0;
    int indicator = 0;

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {

                if (indicator == 0)
                {
                    for (int j = 0; j < 4; j++)
                    {
                        if (AppText[j + i*4] == *"\0")
                        {
                            indicator = 1;
                            break;
                        }
                        else
                        {
                            TmpText += AppText[j + i*4];
                        }
                    }
                    i++;
                }

                fflush(0);
            }
        }

        sf::Text text(TmpText, font, 15);
        text.setOutlineColor(sf::Color::Red);
        text.setFillColor(sf::Color::Red);


        sf::Vector2i localPosition = sf::Mouse::getPosition(window);

        /*
        if (localPosition.x < edge) {view.move(-vel, 0); }
        if (localPosition.x > window.getSize().x - edge) {view.move(vel, 0); }
        */

        if (localPosition.y > window.getSize().y - Edge) {view.move(0, Velocity); }
        if (localPosition.y < Edge) {view.move(0, -Velocity); }

        text.setPosition(0, 0);

        window.clear();

        window.draw(text);

        window.display();

        window.setView(view);

    }

}
