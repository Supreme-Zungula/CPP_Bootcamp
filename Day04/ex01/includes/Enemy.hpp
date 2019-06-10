#ifndef __ENEMY__
#define __ENEMY__

#include <string>

class Enemy
{
private:
    /* data */
    std::string const &_type;
    int _hitPoints;

public:
    Enemy();
    Enemy(int hp, std::string const &type);
    virtual ~Enemy();
    std::string const &getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};

#endif