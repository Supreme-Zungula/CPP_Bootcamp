#ifndef __GAME_ENTITY__
#define __GAME_ENTITY__

#include "Position.hpp"

class GameEntity
{
protected:
    /* data */
    Position pos;

public:
    GameEntity(/* args */);
    GameEntity(GameEntity &gameEntity);
    ~GameEntity();
    GameEntity &operator=(GameEntity &gameEntity);

    void setPosition(int x = 0, int y = 0);
    void setPosition(Position newPos);
    Position &getPosition() const;
    virtual void moveUp() = 0;
    virtual void moveDown() = 0;
    virtual void moveLeft() = 0;
    virtual void moveRight() = 0;
};

#endif