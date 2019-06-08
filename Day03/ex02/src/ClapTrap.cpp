#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "FR4g-TP";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;

    std::cout << "New FR4G-TP " << this->name << " created\n";
}

ClapTrap::ClapTrap(std::string newName)
{
    this->name = newName;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;

    std::cout << "New CLAP-TP " << this->name << " created\n";
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    *this = clapTrap;

    std::cout << "New CLAP-TP created using a copy.\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "CLAP-TP destroyed!\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{

    this->hitPoints = clapTrap.hitPoints;
    this->maxHitPoints = clapTrap.maxHitPoints;
    this->energyPoints = clapTrap.energyPoints;
    this->maxEnergyPoints = clapTrap.maxEnergyPoints;
    this->level = clapTrap.level;
    this->name = clapTrap.name;
    this->meleeAttackDamage = clapTrap.meleeAttackDamage;
    this->rangedAttackDamage = clapTrap.rangedAttackDamage;
    this->armourDamageReduction = clapTrap.armourDamageReduction;

    return (*this);
}

void ClapTrap::rangeAttack(std::string const &target)
{
    std::cout << "<" << this->name << "> attacks <" << target
              << "> at range, causing <" << this->rangedAttackDamage << "> points of damage !\n";
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "<" << this->name << "> melee attacks <" << target
              << "> causing <" << this->meleeAttackDamage << "> points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int actualDamage;

    actualDamage = amount - armourDamageReduction;

    if (hitPoints - actualDamage <= 0)
    {
        hitPoints = 0;
    }
    else
    {
        hitPoints -= actualDamage;
    }

    std::cout << "<" << this->name << "> attacked and took damage of <" << amount << "> points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((hitPoints + amount) > maxHitPoints)
    {
        hitPoints = maxHitPoints;
    }
    else
    {
        hitPoints += amount;
    }

    std::cout << "<" << this->name << "> getting repaired for <" << amount << "> points.\n";
}
