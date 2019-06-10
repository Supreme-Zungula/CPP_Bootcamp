#include "Map.hpp"

Map::Map()
{
    this->width = 720;
    this->height = 480;
}

Map::Map(Map &mapCopy)
{
    *this = mapCopy;
}

