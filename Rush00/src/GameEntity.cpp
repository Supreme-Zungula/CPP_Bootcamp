#include "../includes/GameEntity.hpp"

GameEntity::GameEntity()
{
}

GameEntity::GameEntity(GameEntity &gameEntity)
{
    *this = gameEntity;
}
GameEntity::~GameEntity()
{
    delete this;
}

GameEntity &GameEntity::operator=(GameEntity &entity)
{
    *this = entity;
    return (*this);
}

void GameEntity::setPosition(int x, int y)
{
    this->pos.setX(x);
    this->pos.setY(y);
}

void GameEntity::setPosition(Position newPos)
{
    this->pos = newPos;
}
