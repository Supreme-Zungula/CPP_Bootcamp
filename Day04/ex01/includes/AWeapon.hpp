#ifndef __WEAPON__
#define __WEAPON__

#include <string>

class AWeapon
{
private:
    /* data */
    std::string const   &_name;
    int             _apCost;
    int             _damage;
public:
    AWeapon();
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon(AWeapon const &weapon);
    virtual ~AWeapon();
    virtual AWeapon &operator=(AWeapon const &rifle) = 0;
    int getAPCost() const;
    int getDamage() const;
    std::string const &getName() const;
    virtual void attack() const = 0;
};

#endif