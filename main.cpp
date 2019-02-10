#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>


int main()
{

    sf::RenderWindow window(sf::VideoMode(1600, 900), "Hahakektyper");

    sf::Font font;
    font.loadFromFile("/home/lenovo/Files/Info Project/Hackertyper/arial.ttf");

    std::string textik = "";



    std::ifstream DATABASE("/home/lenovo/Files/Info Project/Hackertyper/hack.txt");

    std::string stor;

    while (!DATABASE.eof()) {std::string str; std::getline(DATABASE, str); stor += str; stor += "\n";}





    sf::View view( sf::FloatRect(0,0,1600,900));

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
                        if (stor[j + i*4] == *"\0")
                        {
                            indicator = 1;
                            break;
                        }
                        else
                        {
                            textik += stor[j + i*4];
                        }
                    }
                    i++;
                }



                fflush(0);
            }
        }
        sf::Text text(textik, font, 15);
        text.setOutlineColor(sf::Color::Red);
        text.setFillColor(sf::Color::Red);

        float vel = 0.05;
        int edge = 20;

        sf::Vector2i localPosition = sf::Mouse::getPosition(window);
        if (localPosition.x < edge) {view.move(-vel, 0); }
        if (localPosition.x > window.getSize().x - edge) {view.move(vel, 0); }
        if (localPosition.y > window.getSize().y - edge) {view.move(0, vel); }
        if (localPosition.y < edge) {view.move(0, -vel); }





        text.setPosition(0, 0);

        window.clear();

        window.draw(text);

        window.display();

        window.setView(view);
    }

    return 0;
}
