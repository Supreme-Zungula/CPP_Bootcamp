#include "phonebook.class.hpp"

Phonebook::Phonebook()
{
}
Phonebook::~Phonebook()
{
}

void Phonebook::setFirstname(std::string fname)
{
    firstname = fname;
}

std::string Phonebook::getFirstname() const
{
    return (firstname);
}