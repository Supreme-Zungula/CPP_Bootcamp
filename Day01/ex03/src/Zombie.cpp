/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:07:24 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 11:07:28 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
    _name = "Fangs"; 
    _type = "Night Crawler";
}

Zombie::~Zombie()
{
    std::cout << "A zombie has been destroyed.\n";
}

void Zombie::announce() const
{
    std::cout << "I am " << _name << " (" << _type << ")- Death awaits you all.\n";
}

void Zombie::setName(std::string newName)
{
    _name = newName;
}

std::string Zombie::getName() const
{
    return (_name);
}

void Zombie::setType(std::string type)
{
    _type = type;
}

std::string Zombie::getType()
{
    return (_type);
}