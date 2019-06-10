#ifndef __PLAYER__
#define __PLAYER__

#include "GameEntity.hpp"

class Player : public GameEntity
{
private:
    /* data */
    unsigned int healthPool;

public:
    Player(/* args */);
    Player(Player &player);
    ~Player();
    Player& operator=(Player &newPlayer);
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    void setHealthPool(unsigned int hp);
    unsigned int getHealthPool() const;
    void shoot();
    void takeDamage(unsigned int damage);

};

#endif