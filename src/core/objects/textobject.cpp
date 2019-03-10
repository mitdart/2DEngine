#include "textobject.h"
#include "../management/drawmanager.h"

TextObject::TextObject(std::string pathFont)
{
    this->font.loadFromFile(pathFont);
}
