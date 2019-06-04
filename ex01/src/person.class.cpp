#include "includes/person.class.hpp"

Person::Person()
{
}

Person::~Person()
{
    this->firstname.clear();
    this->lastname.clear();
    this->nickname.clear();
    this->login.clear();
    this->postalAddress.clear();
    this->email.clear();
    this->phoneNumber.clear();
    this->birthdate.clear();
    this->favouriteMeal.clear();
    this->underwearColour.clear();
    this->darkestSecret.clear();
}

void Person::setFirstname(std::string name)
{
    if (!name.empty())
    {
        firstname = name;
    }
    else
    {
        std::cout << "Firstname cannot be an empty string\n";
    }
}

std::string Person::getFirstname() const
{
    return (firstname);
}

void Person::setLastname(std::string surname)
{
    if (!surname.empty())
    {
        lastname = surname;
    }
}

std::string Person::getLastname() const
{
    return (lastname);
}

void Person::setNickname(std::string name)
{
    if (!name.empty())
    {
        nickname = name;
    }
}