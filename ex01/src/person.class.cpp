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
    if ()
}