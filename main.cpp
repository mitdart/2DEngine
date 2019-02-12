#include <SFML/Graphics.hpp>
#include <iostream>
#include "fstream.h"
#include "hackertyper.h"

int main()
{

    HackerTyper MainWindow(1600, 900, "Hahakektyper");
    ReadFile("/home/lenovo/Files/Info Project/Hackertyper/hack.txt", &MainWindow);
    MainWindow.AppRun();

    return 0;
}
