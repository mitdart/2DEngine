#ifndef APPLICATION_H
#define APPLICATION_H
#include <SFML/Graphics.hpp>

class Application
{
public:

    Application();

    sf::RenderWindow window;
    std::string AppText = "";
    std::string TmpText = "";
    sf::Font font;
};

#endif // APPLICATION_H
