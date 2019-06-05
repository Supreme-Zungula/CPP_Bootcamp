/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:55:46 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/04 13:55:49 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/person.class.hpp"

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

std::string Person::getNickname() const
{
    return (nickname);
}

void Person::setLogin(std::string loginStr)
{
    login = loginStr;
}

std::string Person::getLogin() const
{
    return (login);
}

void Person::setPostalAddress(std::string address)
{
    postalAddress = address;
}

std::string Person::getPostalAddress() const
{
    return (postalAddress);
}

void Person::setEmail(std::string mail)
{
    email = mail;
}

std::string Person::getEmail() const
{
    return (email);
}

void Person::setPhoneNumber(std::string number)
{
    if (!number.empty())
    {
        phoneNumber = number;
    }
}

std::string Person::getPhoneNumber() const
{
    return (phoneNumber);
}

void Person::setBirthdate(std::string dob)
{
    if (!dob.empty())
    {
        birthdate = dob;
    }
}

std::string Person::getBirthdate() const
{
    return (birthdate);
}

void Person::setFavouriteMeal(std::string meal)
{
    favouriteMeal = meal;
}

std::string Person::getFavouriteMeal() const
{
    return (favouriteMeal);
}

void Person::setUnderwearColour(std::string colour)
{
    underwearColour = colour;
}

std::string Person::getUnderwearColour() const
{
    return (underwearColour);
}

void Person::setDarkestSecret(std::string secret)
{
    darkestSecret = secret;
}

std::string Person::getDarkestSecret() const
{
    return (darkestSecret);
}