/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:36:29 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 09:36:32 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
    name = "Fluffy";
    weapon = "Teabag";
}

Pony::Pony(std::string ponyName, std::string newWeapon)
    : name(ponyName), weapon(newWeapon)
{
}
Pony::~Pony()
{
    std::cout << "Pony destroyed\n";
}
void Pony::setName(std::string name)
{
    this->name = name;
}

std::string Pony::getName() const
{
    return (name);
}

void Pony::changeWeapon(std::string newWeapon)
{
    weapon = newWeapon;
}

std::string Pony::viewWeapon() const
{
    return (weapon);
}

std::string Pony::useWeapon()
{
    std::string message = "You just got killed with a " + weapon + " by a pony named " + name + "\n";
}
