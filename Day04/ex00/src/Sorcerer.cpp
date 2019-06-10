#include "../includes/Sorcerer.hpp"

Sorcerer::Sorcerer()
{
    this->name = "Optimus";
    this->title = "Prime";
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
    this->name = name;
    this->title = title;

    std::cout << this->name + ", " + this->title + ", is born !\n";
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
    *this = sorcerer;
    std::cout << this->name + ", " + this->title + ", is born !\n";
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name + ", " + this->title + ", is dead. Consequences will never be the same !\n";
}

Sorcerer &Sorcerer::operator=(Sorcerer const &sorcerer)
{
    name = sorcerer.name;
    title = sorcerer.title;
    return (*this);
}

void Sorcerer::setName(std::string name)
{
    this->name = name;
}

std::string Sorcerer::getName() const
{
    return (this->name);
}

void Sorcerer::setTitle(std::string title)
{
    this->title = title;
}

std::string Sorcerer::getTitle() const
{
    return (this->title);
}

std::string Sorcerer::introduction() const
{
    std::string introduction;

    introduction = "I am " + this->name + ", " + this->title + ", and I like ponies !\n";
    return (introduction);
}

void Sorcerer::polymorph(Victim const &peasant) const
{
    peasant.getPolymorphed();
}
std::ostream& operator<<(std::ostream &os, Sorcerer const &sorcerer)
{
    os << sorcerer.introduction();
    return (os);
}