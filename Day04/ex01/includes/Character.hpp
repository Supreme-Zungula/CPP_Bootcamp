#ifndef __CHARACTER__
#define __CHARACTER__

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    /* data */
    unsigned int            _actionPoints;
    std::string const       &_name;
    AWeapon                 *weapon;

public:
    Character(/* args */);
    Character(std::string const &name);
    Character& operator=(Character const&character);
    ~Character();

    void recoverAP();
    void equip(AWeapon *);
    void attack(Enemy *);
    unsigned int getAP() const;
    AWeapon* getWeapon() const;
    std::string const &getName() const;
};

std::ostream &operator<< (std::ostream &os,  Character const& character);

#endif