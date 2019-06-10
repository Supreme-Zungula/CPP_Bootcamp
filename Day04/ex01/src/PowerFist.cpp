#include <iostream>
#include "../includes/PowerFist.hpp"

PowerFist::PowerFist() :
    _name("Power Fist"), _damage(50), _apCost(5)
{

}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) :
    AWeapon(name, apcost, damage)
{

}

PowerFist::PowerFist(PowerFist const &fist)
{

    *this = fist;
}

PowerFist &PowerFist::operator=(PowerFist const &fist)
{
    *this = fist;
    return (*this);
}

void PowerFist::attack()
{
    std::cout << "* pschhh... SBAM! *\n";
}