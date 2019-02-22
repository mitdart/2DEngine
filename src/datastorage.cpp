#include "datastorage.h"

DataStorage::DataStorage()
{
    font.loadFromFile("arial.ttf");
    std::ifstream DATABASE("hack.txt");
    while (!DATABASE.eof()) {std::string str; std::getline(DATABASE, str); AppText += str; AppText += "\n";}
    DATABASE.close();
}
