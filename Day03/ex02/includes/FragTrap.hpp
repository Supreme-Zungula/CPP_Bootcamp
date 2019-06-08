#ifndef __FRAG_TRAP__
#define __FRAG_TRAP__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &fragTrap);
    ~FragTrap();
    FragTrap& operator=(FragTrap const&frag);
    void    vaulthunter_dot_exe(std::string const &target);
};

#endif