#include <SFML/Graphics.hpp>
#include <iostream>
#include "fstream.h"
#include "hackertyper.h"

int main()
{

    HackerTyper MainWindow(1600, 900, "Hahakektyper");
    ReadFile("hack.txt", &MainWindow);
    MainWindow.AppRun();

    return 0;
}
