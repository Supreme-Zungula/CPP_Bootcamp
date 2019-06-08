#ifndef __SCAV_TRAP__
#define __SCAV_TRAP__

#include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
private:
    /* data */
    unsigned int    hitPoints;
    unsigned int    maxHitPoints;
    unsigned int    energyPoints;
    unsigned int    level;
    std::string     name;
    unsigned int    meleeAttackDamage;
    unsigned int    rangedAttackDamage;
    unsigned int    armourDamageReduction;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scav);
    ~ScavTrap();
    ScavTrap& operator=(ScavTrap const &scav);
    void    rangeAttack(std::string const &target);
    void    meleeAttack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    challengeNewcomer(std::string const& target);
};

#endif