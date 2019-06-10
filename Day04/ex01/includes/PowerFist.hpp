#ifndef __POWERFIST__
#define __POWERFIST__

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
    /* data */
    std::string     _name;
    int             _apCost;
    int             _damage;

public:  
    PowerFist(/* args */);
    PowerFist(std::string const & name, int apcost, int damage);
    PowerFist(PowerFist const &rifle);
    ~PowerFist();
    PowerFist& operator=(PowerFist const &rifle);
    void attack();
};

#endif