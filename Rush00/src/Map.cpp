#include "Map.hpp"

Map::Map()
{
    this->width = 720;
    this->height = 480;

    mapWindowStartPos.setX(0);
    mapWindowStartPos.setY(0);
    mapWindow = newwin(mapWindowStartPos.getX(), mapWindowStartPos.getY(), height, width);
}

Map::Map(Map &mapCopy)
{
    *this = mapCopy;
}

Map::~Map()
{
    delete this;
}

Map &Map::operator=(Map &newMap)
{
    *this = newMap;
    return (*this);
}

void Map::initMap()
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
}

void Map::setMapWindowStartPos(unsigned int x, unsigned int y)
{
    if (x < this->width && 7 < this->height)
    {
        mapWindowStartPos.setX(x);
        mapWindowStartPos.setY(y);
    }
    else
    {
        mapWindowStartPos.setX(0);
        mapWindowStartPos.setY(0);
    }
}

void Map::setMapWindowStartPos(Position startPos)
{
    mapWindowStartPos = startPos;
}

Position &Map::getMapWindowStartPos()
{
    return (mapWindowStartPos);
}

void Map::setMapHeight(unsigned int h)
{
    this->height = h;
}

unsigned int Map::getMapHeight() const
{
    return (this->height);
}

void Map::setMapWidth(unsigned int w)
{
    this->width = w;
}

unsigned int Map::getMapWidth() const
{
    return (width);
}