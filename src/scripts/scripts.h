#ifndef SCRIPTS_H
#define SCRIPTS_H
#include "../core/object_components/basicscript.h"
#include "SFML/Graphics.hpp"

class TestScript : public engine::BasicScript
{
public:
    void update();
    void start();
};

#endif // SCRIPTS_H
