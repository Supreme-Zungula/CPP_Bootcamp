/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:00:01 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/04 16:00:04 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.class.hpp"
void flush()
{
    std::cin.clear();
    std::cin.ignore(INT_MAX, '\n');
}
void displayOptions()
{
    std::cout << "Enter a command you want from the list below.\n";
    std::cout << "1. ADD" << std::endl;
    std::cout << "2. SEARCH" << std::endl;
    std::cout << "3. EXIT" << std::endl;
    std::cout << ":";
}

void addContactDetails(Phonebook &myPhonebook)
{
    std::string userInput;
    Person newContact;
    Date dob;

    std::cout << "First name: ";
    getline(std::cin, userInput);
    newContact.setFirstname(userInput);

    std::cout << "Last name: ";
    getline(std::cin, userInput);
    newContact.setLastname(userInput);

    std::cout << "Nickname: ";
    getline(std::cin, userInput);
    newContact.setNickname(userInput);

    std::cout << "Login: ";
    getline(std::cin, userInput);
    newContact.setLogin(userInput);

    std::cout << "Postal address: ";
    std::getline(std::cin, userInput);
    newContact.setPostalAddress(userInput);

    std::cout << "Email address: ";
    getline(std::cin, userInput);
    newContact.setEmail(userInput);

    std::cout << "Phone number: ";
    getline(std::cin, userInput);
    newContact.setPhoneNumber(userInput);

    std::cout << "Birthdate: ";
    getline(std::cin, userInput);
    newContact.setBirthdate(userInput);

    std::cout << "Favourite meal: ";
    std::getline(std::cin, userInput);
    newContact.setFavouriteMeal(userInput);

    std::cout << "Underwear colour: ";
    getline(std::cin, userInput);
    newContact.setUnderwearColour(userInput);

    std::cout << "Your darkest secret: ";
    std::getline(std::cin, userInput);
    newContact.setDarkestSecret(userInput);

    myPhonebook.addContact(newContact);
}

int main()
{
    Phonebook myPhonebook;
    std::string userInput;
    std::string searchName;

    while (true)
    {
        displayOptions();
        std::getline(std::cin, userInput);
        if (userInput.compare("EXIT") == 0)
        {
            break;
        }
        else if (userInput.compare("ADD") == 0)
        {
            addContactDetails(myPhonebook);
            std::cout << "\n";
        }
        else if (userInput.compare("SEARCH") == 0)
        {
            myPhonebook.searchLoop();
            std::cout << "\n";
        }
        else
        {
            std::cout << "Invalid input\n";
        }
    }
    /* code */
    return 0;
}
