#include "../includes/NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
    this->name = "NINJA-TP";
    this->hitPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->level = 1;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armourDamageReduction = 0;

    std::cout << "New NINJA-TP " << this->name << " created\n";
}

NinjaTrap::NinjaTrap(std::string newName) : ClapTrap(newName)
{
    this->name = newName;
    this->hitPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->level = 1;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armourDamageReduction = 0;

    std::cout << "New NINJA-TP " << this->name << " created\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap) : ClapTrap(ninjaTrap)
{
    *this = ninjaTrap;
    std::cout << "New NINJA-TP created using a copy.\n";
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "NINJA-TP destroyed!\n";
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &ninja)
{

    this->hitPoints = ninja.hitPoints;
    this->maxHitPoints = ninja.maxHitPoints;
    this->energyPoints = ninja.energyPoints;
    this->maxEnergyPoints = ninja.maxEnergyPoints;
    this->level = ninja.level;
    this->name = ninja.name;
    this->meleeAttackDamage = ninja.meleeAttackDamage;
    this->rangedAttackDamage = ninja.rangedAttackDamage;
    this->armourDamageReduction = ninja.armourDamageReduction;

    return (*this);
}

void NinjaTrap::ninjaShoeBox(ClapTrap const& clap)
{
    std::cout << "<" << this->name << "> attacks " << clap.getName() << " with a shoe box.\n"; 
}

void NinjaTrap::basicAttack(ClapTrap const&enemy)
{
    std::cout << "<" << this->name << "> attacks " << enemy.getName() << " with a shuriken.\n";
}
