#ifndef BASICSCRIPT_H
#define BASICSCRIPT_H
#include "gameobjectcomponent.h"

namespace engine
{
    class BasicScript: public GameObjectComponent
    {
    public:
        virtual void update() = 0;
        virtual void start() = 0;
        virtual void collide() = 0;

    };
}
#endif // BASICSCRIPT_H
