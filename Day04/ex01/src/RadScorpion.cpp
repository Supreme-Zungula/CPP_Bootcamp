#include <iostream>
#include "../includes/RadScorpion.hpp"

RadScorpion::RadScorpion()  : Enemy(),
    _type("Super Mutant"), _hitPoints(170)
{
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(int hp, std::string const &type) : Enemy(hp, type),
    _type(type), _hitPoints(hp)
{
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *\n";
}
