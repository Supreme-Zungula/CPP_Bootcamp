#include "../includes/Character.hpp"

Character::Character() : _name (""), _actionPoints(40), weapon()
{
}

Character::Character(std::string const &name) : _name(name), _actionPoints(40)
{
}

void Character::recoverAP()
{
    if (this->_actionPoints <= 30)
        this->_actionPoints += 10;
}

void Character::attack(Enemy *enemy)
{
    if (_actionPoints >= weapon->getAPCost())
    {
        this->_actionPoints -= this->weapon->getAPCost();
        std::cout << this->_name << " attacks " << enemy->getType() << " with a " << weapon->getName() << '\n';
        weapon->attack();
        enemy->takeDamage(weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}
unsigned int Character::getAP() const
{
    return (_actionPoints);
}

AWeapon *Character::getWeapon() const
{
    return (this->weapon);
}
void Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}

std::string const &Character::getName() const
{
    return (_name);
}

std::ostream &operator<<(std::ostream &os, Character const &character)
{
    os << character.getName() << " has " << std::to_string(character.getAP()) << " and wields a " << character.getWeapon()->getName() << std::endl;
    return (os);
}
