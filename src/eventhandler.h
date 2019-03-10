#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
#include <iostream>


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

    void EHClose();
    TransformOptions options;
    void TransformText();
    void pass(){}

};

#endif // EVENTHANDLER_H
