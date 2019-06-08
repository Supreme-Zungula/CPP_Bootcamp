#ifndef __FRAG_TRAP__
#define __FRAG_TRAP__

#include <iostream>
#include <string>
#include <ctime>

class FragTrap
{
protected:
    /* data */
    unsigned int    hitPoints;
    unsigned int    maxHitPoints;
    unsigned int    energyPoints;
    unsigned int    maxEnergyPoints;
    unsigned int    level;
    std::string     name;
    unsigned int    meleeAttackDamage;
    unsigned int    rangedAttackDamage;
    unsigned int    armourDamageReduction;
    
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &fragTrap);
    ~FragTrap();
    FragTrap& operator=(FragTrap const &frag);
    void    rangeAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    vaulthunter_dot_exe(std::string const &target);

};

#endif