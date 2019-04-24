#ifndef DRAWMANAGER_H
#define DRAWMANAGER_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "../object_components/renderer.h"


namespace engine
{

    struct WindowSettings
    {
        std::string name;
        int width = 1440;
        int height = 800;
    };

    const WindowSettings settings;

    class DrawManager
    {
    public:
        DrawManager();

        sf::RenderWindow* getWindow();

        void drawObject(sf::Drawable& object);
        void drawAllObjects();
        std::vector<Renderer*> allRenderers;

        void addRenderer(Renderer* renderer);
        void removeRenderer(Renderer* renderer);

    private:
        sf::RenderWindow* window;
    };
}


#endif // DRAWMANAGER_H
