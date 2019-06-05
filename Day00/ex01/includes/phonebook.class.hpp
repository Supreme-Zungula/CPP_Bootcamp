/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:55:09 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/04 13:55:12 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__
#define __PHONEBOOK__

#include <iostream>
#include <string>
#include <iomanip>
#include "person.class.hpp"

class Phonebook
{
private:
    Person contacts[8];
    Person matchingContacts[8];
    int numberOfContacts;
    int searchResultsLen;

public:
    Phonebook(/* args */);
    ~Phonebook();

    void addContact(Person newContanct);
    Person *searchContactByName(std::string name);
    Person searchContactByIndex(int index);
    void displaySearchResuslts(Person matchesContacts[]);
    void viewContacts() const;
    void viewTop4Contacts() const;
    void showContactDetails(Person contact) const;
    int getNumberOfContacts() const;
    int getSearchResultsLen();
    void searchLoop() const;
};

#endif
