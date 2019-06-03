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

void Phonebook::setLastname(std::string lname)
{
    lastname = lname;
}

std::string Phonebook::getLastname() const
{
    return (lastname);
}

void Phonebook::setNickname(std::string name)
{
    nickname = name;
}

std::string Phonebook::getNickname() const
{
    return (nickname);
}

void Phonebook::setLogin(std::string loginString)
{
    login = loginString;
}

std::string Phonebook::getLogin() const
{
    return (login);
}

void Phonebook::setPostalAddress(std::string address)
{
    postalAddress = address;
}

std::string Phonebook::getPostalAddress() const
{
    return (postalAddress);
}

std::string Phonebook::formatAddress()
{
    return (postalAddress);
}

void Phonebook::setEmail(std::string mail)
{
    email = mail;
}

std::string Phonebook::getEmail() const
{
    return (email);
}

void Phonebook::setPhoneNumber(std::string number)
{
    if (number.length() == 10)
        phoneNumber = number;
    else
    {
        std::cout << "Phone number must be 10 digits\n";
    }
}

std::string Phonebook::getPhoneNumber() const
{
    return (phoneNumber);
}