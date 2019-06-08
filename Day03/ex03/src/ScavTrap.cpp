#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "SCAV-TP";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;

    std::cout << "New SCAV-TP " << this->name << " created\n";
}
ScavTrap::ScavTrap(std::string newName)
{
    this->name = newName;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;

    std::cout << "New SCAV-TP " << this->name << " created\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed!\n";
}
ScavTrap::ScavTrap(const ScavTrap &scav)
{
    this->name = scav.name;
    this->hitPoints = scav.hitPoints;
    this->maxHitPoints = scav.maxHitPoints;
    this->energyPoints = scav.energyPoints;
    this->level = scav.level;
    this->meleeAttackDamage = scav.meleeAttackDamage;
    this->rangedAttackDamage = scav.rangedAttackDamage;
    this->armourDamageReduction = scav.armourDamageReduction;

    std::cout << "New SCAV-TP created using a copy.\n";
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
    std::string challenges[4] = {"fist fight", "rain dance", "slap contest", "Sumo wrestling contest"};
    int randIndex;
    randIndex = rand() % 4;
    std::cout << "<" << this->name << "> challenges " << target << " to a " << challenges[randIndex] << "\n";
}

void ScavTrap::basicAttack(ClapTrap const&enemy)
{
    std::cout << "<" << this->name << "> attacks " << enemy.getName() << " with a machete.\n";
}
