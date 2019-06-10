#ifndef __MAP__
#define __MAP__

#include <ncurses.h>
#include "Position.hpp"
#include "GameEntity.hpp"
#include "Player.hpp"
#include "Enemy.hpp"

class Map
{
private:
    /* data */
    unsigned int    width;
    unsigned int    height;
    Position        mapWindowStartPos;
    WINDOW          *mapWindow;
    Player          player;
    Enemy           **enemies;

public:
    Map(/* args */);
    Map(Map &mapCopy);
    ~Map();
    Map& operator=(Map &map);
    void initMap();
    void setMapWindowStartPos(int x, int y);
    void setMapWindowStartPos(Position startPos);
    Position &getMapWindowStartPos() const;

    void setMapWidth(unsigned int w);
    unsigned int getMapWidth() const;

    void setMapHeight(unsigned int h);
    unsigned int getMapHeight() const;

    void setPlayer(Player &playrer);
    Player getPlayer() const;

    void setEnemies(Enemy enemies[]);
    Enemy** getEnemies() const;
};

#endif