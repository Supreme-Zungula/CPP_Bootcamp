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

#include "../includes/phonebook.class.hpp"

Phonebook::Phonebook()
{
    numberOfContacts = 0;
    searchResultsLen = 0;
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

void Phonebook::searchLoop() const
{
    int userInput;

    if (numberOfContacts == 0)
    {
        std::cout << "\nContacts list empty.\n";
        
        return;
    }
    while (true)
    {
        std::cout << "\nEnter an index number to view contact or -1 to exit.\n\n";
        viewContacts();
        std::cout << "\n";
        std::cin >> userInput;
        if (std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            if (userInput == -1)
            {
                break;
            }
            else if (userInput >= 0 && userInput < numberOfContacts)
            {
                showContactDetails(contacts[userInput]);
            }
            else
            {
                std::cout << "Invalid input\n";
            }
        }
        else
        {
            std::cout << "Invalid input.\n";
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
    }
}
Person *Phonebook::searchContactByName(std::string name)
{
    int i = 0;
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
    searchResultsLen = numberOfContacts;
    return (matchingContacts);
}

Person Phonebook::searchContactByIndex(int index)
{
    if (index > numberOfContacts)
    {
        std::cout << "Index out of bounds\n";
    }
    return (contacts[index]);
}

void Phonebook::viewContacts() const
{

    if (numberOfContacts == 0)
    {
        std::cout << "\nContact list empty\n";
    }

    int count = 0;
    std::string name;
    std::string surname;
    std::string nickname;

    std::cout << std::setfill(' ') << "|" << std::setw(10) << "Index";
    std::cout << std::setfill(' ') << "|" << std::setw(10) << "First name";
    std::cout << std::setfill(' ') << "|" << std::setw(10) << "Last name";
    std::cout << std::setfill(' ') << "|" << std::setw(10) << "Nickname" << "|\n";

    while (count < numberOfContacts)
    {
        name = contacts[count].getFirstname();
        surname = contacts[count].getLastname();
        nickname = contacts[count].getNickname();

        if (name.length() > 9)
        {
            name.replace(9, name.length(), ".");
        }
        if (surname.length() > 9)
        {
            surname.replace(9, surname.length(), ".");
        }
        if (nickname.length() > 9)
        {
            nickname.replace(9, nickname.length(), ".");
        }
        std::cout << std::setfill(' ') << "|" << std::setw(10) << count;
        std::cout << std::setfill(' ') << "|" << std::setw(10) << name;
        std::cout << std::setfill(' ') << "|" << std::setw(10) << surname;
        std::cout << std::setfill(' ') << "|" << std::setw(10) << nickname << "|\n";
        count++;
    }
}

void Phonebook::viewTop4Contacts() const
{
    int count = 0;
    std::string name;
    std::string surname;
    std::string nickname;

    if (numberOfContacts == 0)
    {
        std::cout << "Contact list empty\n";
    }

    std::cout << std::setfill(' ') << "|" << std::setw(10) << "Index";
    std::cout << std::setfill(' ') << "|" << std::setw(10) << "First name";
    std::cout << std::setfill(' ') << "|" << std::setw(10) << "Last name";
    std::cout << std::setfill(' ') << "|" << std::setw(10) << "Nickname" << "|\n";

    while (count < numberOfContacts && count < 4)
    {
        name = contacts[count].getFirstname();
        surname = contacts[count].getLastname();
        nickname = contacts[count].getNickname();

        if (name.length() > 9)
        {
            name.replace(9, name.length(), ".");
        }
        if (surname.length() > 9)
        {
            surname.replace(9, surname.length(), ".");
        }
        if (nickname.length() > 9)
        {
            nickname.replace(9, nickname.length(), ".");
        }
        std::cout << std::setfill(' ') << '|' << std::setw(10) << count;
        std::cout << std::setfill(' ') << '|' << std::setw(10) << name;
        std::cout << std::setfill(' ') << '|' << std::setw(10) << surname;
        std::cout << std::setfill(' ') << '|' << std::setw(10) << nickname << "|";
        count++;
    }
}
void Phonebook::displaySearchResuslts(Person matchingContacts[])
{
    int i = 0;
    std::cout << "|" << std::setw(10) << "Index"
              << "|";
    std::cout << "|" << std::setw(10) << "First name"
              << "|";
    std::cout << "|" << std::setw(10) << "Last name"
              << "|";
    std::cout << "|" << std::setw(10) << "Nickname"
              << "|\n";
    if (searchResultsLen == 0)
    {
        std::cout << "No matching results found\n";
    }

    while (i < searchResultsLen)
    {
        std::cout << "|" << std::setw(10) << i << std::setw(10) << matchingContacts[i].getFirstname();
        std::cout << "|" << std::setw(10) << contacts[i].getLastname();
        std::cout << "|" << std::setw(10) << contacts[i].getNickname() << '\n';
        i++;
    }
}

void Phonebook::showContactDetails(Person contact) const
{
    std::cout << "First name: " << contact.getFirstname() << '\n';
    std::cout << "Last name: " << contact.getLastname() << '\n';
    std::cout << "Nickname: " << contact.getNickname() << '\n';
    std::cout << "Login: " << contact.getLogin() << '\n';
    std::cout << "Postal address: " << contact.getPostalAddress() << '\n';
    std::cout << "Email: " << contact.getEmail() << '\n';
    std::cout << "Birthdate: " << contact.getBirthdate() << '\n';
    std::cout << "Phone number: " << contact.getPhoneNumber() << '\n';
    std::cout << "Favourite meal: " << contact.getFavouriteMeal() << '\n';
    std::cout << "Underwear colour: " << contact.getUnderwearColour() << '\n';
    std::cout << "Darkest secret: " << contact.getDarkestSecret() << "\n";
}

int Phonebook::getNumberOfContacts() const
{
    return (numberOfContacts);
}

int Phonebook::getSearchResultsLen()
{
    return (searchResultsLen);
}