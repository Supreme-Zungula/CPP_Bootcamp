/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:54:36 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/04 13:54:41 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PERSON__
# define __PERSON__

#include <iostream>
#include <string>
#include "date.class.hpp"

class Person
{
private: 
    /* data */
    std::string     firstname;
    std::string     lastname;
    std::string     nickname;
    std::string     login;
    std::string     postalAddress;
    std::string     email;
    std::string     phoneNumber;
    std::string     birthdate;
    std::string     favouriteMeal;
    std::string     underwearColour;
    std::string     darkestSecret;

public:
    Person(/* args */);
    ~Person();

    void setFirstname(std::string name);
    std::string getFirstname() const;

    void setLastname(std::string surname);
    std::string getLastname() const;

    void setNickname(std::string nname);
    std::string getNickname() const;

    void setLogin(std::string loginString);
    std::string getLogin() const;

    void setPostalAddress(std::string address);
    std::string getPostalAddress() const;
    std::string formatAddress();

    void setEmail(std::string mail);
    std::string getEmail() const;

    void setPhoneNumber(std::string phone);
    std::string getPhoneNumber() const;

    void setBirthdate(std::string dob);
    std::string getBirthdate() const;

    void setFavouriteMeal(std::string meal);
    std::string getFavouriteMeal() const;

    void setUnderwearColour(std::string underwearC);
    std::string getUnderwearColour() const;

    void setDarkestSecret(std::string secret);
    std::string getDarkestSecret() const;
};

#endif
