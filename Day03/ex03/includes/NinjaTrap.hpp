#ifndef __NINJA_TRAP__
#define __NINJA_TRAP__

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:
    /* data */
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap &ninjaTrap);
    ~NinjaTrap();
    NinjaTrap& operator=(NinjaTrap const &ninja);
    void    ninjaShoeBox(ClapTrap const &clap);
    void    basicAttack(ClapTrap const &enemy);
};

#endif