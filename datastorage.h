#ifndef DATASTORAGE_H
#define DATASTORAGE_H
#include <SFML/Graphics.hpp>
#include <fstream>


class DataStorage
{
public:
    DataStorage();
    std::string AppText;
    std::string TmpText = "";
    sf::Font font;

};

#endif // DATASTORAGE_H
