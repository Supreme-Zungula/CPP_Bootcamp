#ifndef __CLAP_TRAP__
#define __CLAP_TRAP__

#include <iostream>

class ClapTrap
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
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &clapTrap);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &clapTrap);
    std::string getName() const;
    void    rangeAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};


#endif