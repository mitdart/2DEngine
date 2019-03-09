#include "textobject.h"
#include "drawmanager.h"

TextObject::TextObject(std::string pathFont)
{
    this->font.loadFromFile(pathFont);
}
