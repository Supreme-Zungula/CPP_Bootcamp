#include "../includes/AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apCost(apcost), _damage(damage)
{
    this->_name = name;
    this->_apCost = apcost;
    this->_damage = damage;
}

AWeapon::AWeapon(AWeapon const &weapon)
{
    *this = weapon;
}

int AWeapon::getAPCost() const
{
    return (this->_apCost);
}

int AWeapon::getDamage() const
{
    return (this->_damage);
}


