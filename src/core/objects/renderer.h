#ifndef RENDERER_H
#define RENDERER_H
#include <SFML/Graphics.hpp>

class Renderer
{
public:
    Renderer();
    Renderer(sf::Drawable* obj) : mesh(obj)
    {}
    sf::Drawable* mesh;
};

#endif // RENDERER_H
