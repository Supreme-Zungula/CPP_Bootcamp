/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:56:13 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/04 13:56:14 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook()
{
    numberOfContacts = 0;
}
Phonebook::~Phonebook()
{
}

void Phonebook::addContact(Person newContact)
{
    if (numberOfContacts < 8)
    {
        contacts[numberOfContacts] = newContact;
        numberOfContacts++;
        std::cout << "Contact successfuly added\n";
        viewContacts();
    }
    else
    {
        std::cout << "Contact list full\n";
    }
}

Person *Phonebook::searchContact(std::string name)
{
    int i = 0;
    Person matchingContacts[8];
    int numberOfMatches = 0;
    while (i < 8)
    {
        if (name.compare(contacts[i].getFirstname()) == 0)
        {
            matchingContacts[numberOfMatches] = contacts[i];
            numberOfMatches++;
        }
        i++;
    }
    return (matchingContacts);
}

void Phonebook::viewContacts() const
{
    int     i = 0;
    std::cout << "Index\tFirstname\tLastname\tNickname\n";
    if (numberOfContacts == 0)
    {
        std::cout << "Contact list empty\n";
    }

    while (i < numberOfContacts )
    {
        
    }
    
}