#ifndef __SCAV_TRAP__
#define __SCAV_TRAP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scav);
    ~ScavTrap();
    ScavTrap& operator=(ScavTrap const& scav);
    void    challengeNewcomer(std::string const &target);
};

#endif