#ifndef __PHONEBOOK__
#define __PHONEBOOK__

#include <iostream>
#include <string>
#include <iomanip>
#include "person.class.hpp"

class Phonebook
{
private:
    Person  contacts[9];
    int     numberOfContacts;
public:
    Phonebook(/* args */);
    ~Phonebook();

    void addContact(Person newContanct);
    Person searchContact(std::string name);
    Person *getContacts() const;
};

#endif