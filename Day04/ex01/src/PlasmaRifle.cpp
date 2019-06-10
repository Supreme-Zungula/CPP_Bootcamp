#include <iostream>
#include "../includes/PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
    _name("Plasma Rifle"), _damage(21), _apCost(5)
{
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) :
    AWeapon(name, apcost, damage)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rifle)
{

    *this = rifle;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rifle)
{
    *this = rifle;
    return (*this);
}

void PlasmaRifle::attack()
{
    std::cout << "* piouuu piouuu piouuu *\n";
}