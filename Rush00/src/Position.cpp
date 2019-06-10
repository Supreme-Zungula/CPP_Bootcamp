#include "../includes/Position.hpp"

Position::Position()
{
    this->x = 0;
    this->y = 0;
}

Position::Position(int x, int y)
{
    this->x = x;
    this->y = y;
}

Position::Position(Position &posCopy)
{
    this->x = posCopy.getX();
    this->y = posCopy.getY();
}

Position::~Position()
{
}

int Position::getX() const
{
    return (this->x);
}

void Position::setX(int x)
{
    this->x = x;
}

int Position::getY() const
{
    return (this->y);
}

void Position::setY(int y)
{
    this->y = y;
}

Position& Position::getPos()
{
    return (*this);
}

Position& Position::operator=(Position &newPos)
{
    *this = newPos;
    return (*this);
}