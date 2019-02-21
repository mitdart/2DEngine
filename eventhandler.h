#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
#include "drawmanager.h"
#include <SFML/Graphics.hpp>

struct TransformOptions
{
  int counter = 0;
  int indicator = 0;
};

class EventHandler
{
public:
    EventHandler();
    DrawManager* drawManager;
    void EHClose();
    TransformOptions options;
    void TransformText();
};

#endif // EVENTHANDLER_H
