#include <iostream>
#include "../includes/SuperMutant.hpp"

SuperMutant::SuperMutant()  : Enemy(),
    _type("Super Mutant"), _hitPoints(170)
{
    std::cout << "Gaaah. Me want smash heads !\n";
}

SuperMutant::SuperMutant(int hp, std::string const &type) : Enemy(hp, type),
    _type(type), _hitPoints(hp)
{
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh...\n";
}
void SuperMutant::takeDamage(int damage)
{
    if (damage > 0 && damage < _hitPoints)
    {
        damage -= 3;
        _hitPoints -= damage;
    }
    else if (damage > _hitPoints)
    {
        _hitPoints = 0;
    }
}