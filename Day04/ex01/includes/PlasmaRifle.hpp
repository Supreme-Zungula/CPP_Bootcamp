#ifndef __PLASMARIFLE__
#define __PLASMARIFLE__

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
    /* data */
    std::string     _name;
    int             _apCost;
    int             _damage;

public:  
    PlasmaRifle(/* args */);
    PlasmaRifle(std::string const & name, int apcost, int damage);
    PlasmaRifle(PlasmaRifle const &rifle);
    ~PlasmaRifle();
    PlasmaRifle& operator=(PlasmaRifle const &rifle);
    void attack();
};

#endif