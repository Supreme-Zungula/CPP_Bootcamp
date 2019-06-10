#ifndef __RADSCORPION__
#define __RADSCORPION__

#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
    /* data */
    std::string const & _type;
    int                 _hitPoints;

public:
    RadScorpion();
    RadScorpion(int hp, std::string const & type);
    virtual ~RadScorpion();
    void takeDamage(int);
};

#endif