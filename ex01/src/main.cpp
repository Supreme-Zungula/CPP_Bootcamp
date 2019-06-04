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

void displayOptions()
{
    std::cout << "Enter a command you want from the list below\n";
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
}

void addContactDetails(Phonebook &myPhonebook)
{
    std::string userInput;
    Person newContact;
    Date dob;

    std::cout << "Enter first name: ";
    std::cin >> userInput;
    newContact.setFirstname(userInput);

    std::cout << "Enter last name: ";
    std::cin >> userInput;
    newContact.setLastname(userInput);

    std::cout << "Enter nickname: ";
    std::cin >> userInput;
    newContact.setNickname(userInput);

    std::cout << "Enter login: ";
    std::cin >> userInput;
    newContact.setLogin(userInput);

    std::cout << "Enter postal address: ";
    std::getline(std::cin, userInput);
    newContact.setPostalAddress(userInput);

    std::cout << "Enter email address: ";
    std::cin >> userInput;
    newContact.setEmail(userInput);

    std::cout << "Enter phone number: ";
    std::cin >> userInput;
    newContact.setPhoneNumber(userInput);

    std::cout << "Enter birthdate in format dd/mm/yyyy: ";
    std::cin >> userInput;
    newContact.setBirthdate(userInput);

    std::cout << "Enter favourite meal: ";
    std::getline(std::cin, userInput);
    newContact.setFavouriteMeal(userInput);

    std::cout << "Enter underwear colour: ";
    std::cin >> userInput;
    newContact.setUnderwearColour(userInput);

    std::cout << "Enter your darkest secret: ";
    std::getline(std::cin, userInput);
    newContact.setDarkestSecret(userInput);

    myPhonebook.addContact(newContact);
}

void displayResults(Person *searchResults,  int matchesLen)
{

}

int main()
{
    Phonebook myPhonebook;
    Person *searchResults;
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
            std::cout << "Enter contact name to search for: ";
            std::cin >> searchName;
            searchResults = myPhonebook.searchContact(searchName);
            std::cout << "\n";
            myPhonebook.displaySearchResuslts(searchResults, myPhonebook.getNumberOfContacts());
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
