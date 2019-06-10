#ifndef __PEON__
#define __PEON__

#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
private:
    /* data */
public:
    Peon();
    Peon(std::string name);
    Peon(const Peon &peon);
    ~Peon();
    Peon& operator=(Peon const &peon);
    void getPolymorphed();
};

// std::ostream& operator<<(std::ostream &os, Peon const &peon)
// {
//     os << peon.introduction();
//     return (os);
// }
#endif