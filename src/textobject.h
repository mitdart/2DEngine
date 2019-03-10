#ifndef TEXTOBJECT_H
#define TEXTOBJECT_H
#include "gameobject.h"

class TextObject: public GameObject
{
public:
    TextObject(std::string pathFont);
    sf::Font font;
    std::string text = "text";
    int size = 19;

};

#endif // TEXTOBJECT_H
