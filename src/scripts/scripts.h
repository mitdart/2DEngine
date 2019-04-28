
#ifndef PICTURESCRIPT_H
#define PICTURESCRIPT_H


#include "../core/object_components/basicscript.h"

#include "SFML/Graphics.hpp"

class EmemyScript : public engine::BasicScript
{
public:
    void update();
    void start();
};

class TestScript : public engine::BasicScript
{
public:

    void update();
    void start();

};

#endif // PICTURESCRIPT_H
