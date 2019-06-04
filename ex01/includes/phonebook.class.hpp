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

public:
    Phonebook(/* args */);
    ~Phonebook();

    void addContact(Person newContanct);
    Person *searchContact(std::string name);
    void displaySearchResuslts(Person matchesContacts[], int numberOfMatches);
    void viewContacts() const;
    int getNumberOfContacts() const;
    void run();
};

#endif
