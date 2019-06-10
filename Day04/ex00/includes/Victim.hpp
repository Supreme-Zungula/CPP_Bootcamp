#ifndef __VICTIM__
#define __VICTIM__

class Victim
{
protected:
    /* data */
    std::string     name;
public:
    Victim(/* args */);
    Victim (std::string name);
    Victim(const Victim &victim);
    ~Victim();
    Victim& operator=(Victim const &newVictim);
    void setName(std::string name);
    std::string getName() const;
    virtual std::string introduction() const;
    void getPolymorphed() const;
};

std::ostream& operator <<(std::ostream &os, Victim const &victim);

#endif