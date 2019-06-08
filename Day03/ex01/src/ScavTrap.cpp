#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "SCAV-TP";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->meleeAttackDamage = 20;
    this->rangedAttackDamage = 15;
    this->armourDamageReduction = 3;

    std::cout << "New SCAV-TP " << this->name << " created\n";
}
ScavTrap::ScavTrap(std::string newName)
{
    this->name = newName;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 50;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->meleeAttackDamage = 20;
    this->rangedAttackDamage = 25;
    this->armourDamageReduction = 3;

    std::cout << "New SCAV-TP " << this->name << " created\n";
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
    *this = scav;
    std::cout << "New SCAV-TP created using a copy.\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed!\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap const &scav)
{
    
    this->hitPoints = scav.hitPoints;
    this->maxHitPoints = scav.maxHitPoints;
    this->energyPoints = scav.energyPoints;
    this->maxEnergyPoints = scav.maxEnergyPoints;
    this->level = scav.level;
    this->name = scav.name;
    this->meleeAttackDamage = scav.meleeAttackDamage;
    this->rangedAttackDamage = scav.rangedAttackDamage;
    this->armourDamageReduction = scav.armourDamageReduction;

    return (*this);
}

void ScavTrap::rangeAttack(std::string const &target)
{
    std::cout << "SCAV-TP <" << this->name << "> attacks <" << target
              << "> at range, causing <" << this->rangedAttackDamage << "> points of damage !\n";
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SCAV-TP <" << this->name << "> melee attacks <" << target
              << "> causing <" << this->meleeAttackDamage << "> points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
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

    std::cout << "SCAV-TP attacked and took damage of <" << amount << "> points!\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if ((hitPoints + amount) > maxHitPoints)
    {
        hitPoints = maxHitPoints;
    }
    else
    {
        hitPoints += amount;
    }

    std::cout << "SCAV-TP getting repaired for <" << amount << "> points.\n";
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    std::string challenges[4] = {"fist fight", "rain dance", "slap contest", "Sumo wrestling contest"};
    int randIndex;
    randIndex = rand() % 4;
    std::cout << this->name << " challenges " << target << " to a " << challenges[randIndex] << "\n";
}