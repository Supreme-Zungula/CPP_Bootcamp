#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->name = "FR4G-TP";
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;

    std::cout << "New FR4G-TP " << this->name << " created\n";
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName)
{
    this->name = newName;
    this->hitPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armourDamageReduction = 5;

    std::cout << "New FR4G-TP " << this->name << " created\n";
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << "New FR4G-TP created using a copy.\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FR4G-TP destroyed!\n";
}

FragTrap& FragTrap::operator=(FragTrap const& frag)
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

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    int randIndex;
    std::string attacks[6] = {"Finger", "Dubstep gun", "Dildo", "Supreme fart", "Penis", "Buji"};

    randIndex = rand() % 6;

    if (energyPoints >= 25)
    {
        std::cout << "<"<< this->name << "> attacks " << target << " with a " << attacks[randIndex] << " and teabags you.\n";
    }
    else
    {
        std::cout << "Out of energy, be patient mortal.\n";
    }
}