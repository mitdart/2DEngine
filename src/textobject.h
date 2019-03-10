#ifndef TEXTOBJECT_H
#define TEXTOBJECT_H
#include "gameobject.h"

class TextObject: public GameObject
{
public:
    TextObject(std::string pathFont);
    sf::Font font;
    std::string text = "Welcome! It's a newest version of our engine. It already can be used for simple programs, but it's still unstable.";
    int size = 19;

};

#endif // TEXTOBJECT_H
