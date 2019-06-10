#include <iostream>
#include <string>

#include "../includes/Victim.hpp"

Victim::Victim()
{
    this->name = "Doofus";
    std::cout << "Some random victim named " << this->name << " just popped!\n";
}

Victim::Victim(std::string name)
{
    this->name = name;
}

Victim::Victim(const Victim  &victim)
{
    *this = victim;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->name << " just died for no apperent reason !\n";
}

Victim& Victim::operator=(Victim const &victim)
{
    this->name = victim.name;
    return (*this);
}

std::string Victim::introduction() const
{
    std::string intro;

    intro = "I'm " + this->name + " and I like otters !\n";
    return (intro);
}

void Victim::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a cute little sheep !\n";
}
std::ostream& operator <<(std::ostream &os, Victim const &victim)
{
    os << victim.introduction();
    return (os);
}