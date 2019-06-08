#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
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

FragTrap::FragTrap(std::string newName)
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

    std::cout << "New FR4G-TP " << this->name << " created\n";
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    this->name = fragTrap.name;
    this->hitPoints = fragTrap.hitPoints;
    this->maxHitPoints = fragTrap.maxHitPoints;
    this->energyPoints = fragTrap.energyPoints;
    this->level = fragTrap.level;
    this->meleeAttackDamage = fragTrap.meleeAttackDamage;
    this->rangedAttackDamage = fragTrap.rangedAttackDamage;
    this->armourDamageReduction = fragTrap.armourDamageReduction;

    std::cout << "New FR4G-TP created using a copy.\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP destroyed!\n";
}

FragTrap& FragTrap::operator=(FragTrap const &frag)
{
    this->hitPoints = frag.hitPoints;
    this->maxHitPoints = frag.maxHitPoints;
    this->energyPoints = frag.energyPoints;
    this->maxEnergyPoints = frag.maxEnergyPoints;
    this->level = frag.level;
    this->name = frag.name;
    this->meleeAttackDamage = frag.meleeAttackDamage;
    this->rangedAttackDamage = frag.rangedAttackDamage;
    this->armourDamageReduction = frag.armourDamageReduction;
    
    return (*this);
}

void FragTrap::rangeAttack(std::string const &target)
{
    std::cout << "FR4G-TP <" << this->name << "> attacks <" << target
              << "> at range, causing <" << this->rangedAttackDamage << "> points of damage !\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP <" << this->name << "> melee attacks <" << target
              << "> causing <" << this->meleeAttackDamage << "> points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
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

    std::cout << "FR4G-TP attacked and took damage of <" << amount << "> points!\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
    if ((hitPoints + amount) > maxHitPoints)
    {
        hitPoints = maxHitPoints;
    }
    else
    {
        hitPoints += amount;
    }

    std::cout << "FR4G-TP getting repaired for <" << amount << "> points.\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    int randIndex;
    std::string attacks[6] = {"Finger", "Dubstep gun", "Dildo", "Supreme fart", "Penis", "Buji"};

    randIndex = rand() % 6;

    if (energyPoints >= 25)
    {
        std::cout << "FR4G-TP attacks " << target << " with a " << attacks[randIndex] << " and teabags you.\n";
    }
    else
    {
        std::cout << "Out of energy, be patient mortal.\n";
    }
}