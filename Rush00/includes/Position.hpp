#ifndef __POSITION__
#define __POSITION__

class Position
{
private:
    /* data */
    int x;
    int y;
public:
    Position(/* args */);
    Position(int x, int y);
    Position(Position &copyPos);
    ~Position();

    void setY(int y);
    int getY() const;

    void setX(int x);
    int getX() const;

    Position& getPos();
    Position& operator=(Position &pos);
};


#endif