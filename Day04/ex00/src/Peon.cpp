#include <string>
#include <iostream>
#include "../includes/Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    this->name = name;
    std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon &peon)
{
    *this = peon;
}

Peon::~Peon()
{
    std::cout << "Bleuark...\n";
}

Peon &Peon::operator=(const Peon &newPeon)
{
    this->name = newPeon.name;
    return (*this);
}

void Peon::getPolymorphed()
{
    std::cout << this->name << " has been turned into a Pink pony !\n";
}