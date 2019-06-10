#ifndef __SORCERER__
#define __SORCERER__

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
    /* data */
    Sorcerer(/* args */);
    std::string     name;
    std::string     title;

public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer &sorcerer);
    ~Sorcerer();
    Sorcerer &operator=(Sorcerer const &sorcerer);

    void setName(std::string name);
    std::string getName() const;

    void setTitle(std::string title);
    std::string getTitle() const;

    virtual std::string introduction() const;
    void polymorph(Victim const &peasant) const;
};

std::ostream& operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif