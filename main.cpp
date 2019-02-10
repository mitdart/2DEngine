#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>




void readDataBase(std::string filename, std::string* text)
{
    std::ifstream DATABASE(filename);
    while(!DATABASE.eof())
    {

        std::string str;
        std::getline(DATABASE, str);
        *text += str;

    }
}





int main()
{

    sf::RenderWindow window(sf::VideoMode(1600, 900), "My okno");

    sf::Font font;
    font.loadFromFile("/home/lenovo/Files/Info Project/Hackertyper/arial.ttf");

    std::string textik = "";

    std::ifstream DATABASE("/home/lenovo/Files/Info Project/Hackertyper/hack.txt");



    sf::View view( sf::FloatRect(0,0,1600,900));

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {

                std::string str;
                std::getline(DATABASE, str);
                textik += str;
                textik += "\n";
                fflush(0);
            }
        }
        sf::Text text(textik, font, 12);

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
