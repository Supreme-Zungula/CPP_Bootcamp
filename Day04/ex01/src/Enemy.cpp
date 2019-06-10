#include "../includes/Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _type(type), _hitPoints(hp)
{
}

std::string const &Enemy::getType() const
{
    return (_type);
}

int Enemy::getHP() const
{
    return (this->_hitPoints);
}

void Enemy::takeDamage(int damage)
{
    if (damage > 0 && damage < _hitPoints)
    {
        _hitPoints -= damage;
    }
    else if (damage > _hitPoints)
    {
        _hitPoints = 0;
    }
}
