#ifndef INPUT_H
#define INPUT_H

#include <SFML/Graphics.hpp>
#include <map>

enum KeyCode {
    W = sf::Keyboard::Key::W,
    A = sf::Keyboard::Key::A,
    S = sf::Keyboard::Key::S,
    D = sf::Keyboard::Key::D,
    Mouse_1 = sf::Mouse::Left,
    Space = sf::Keyboard::Key::Space
};
namespace engine
{

    class KeyboardInput
    {
     public:
        static bool getKey(KeyCode key);
        static bool getKeyDown(KeyCode key);
        static bool getKeyUp(KeyCode key);

        static void keyPressed(sf::Keyboard::Key key);
        static void keyReleased(sf::Keyboard::Key key);

        static std::map<KeyCode, bool> isKeyHold;
        static std::map<KeyCode, bool> isPressedOnce;

     private:
        KeyboardInput();
        static KeyCode convertFromSfmlKey(sf::Keyboard::Key key);
    };
}

#endif
