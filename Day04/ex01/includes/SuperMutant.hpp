#ifndef __SUPERMUTANT__
#define __SUPERMUTANT__

#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
    /* data */
    std::string const & _type;
    int                 _hitPoints;

public:
    SuperMutant();
    SuperMutant(int hp, std::string const & type);
    virtual ~SuperMutant();
    void takeDamage(int);
};

#endif