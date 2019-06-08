/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:26:24 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 18:26:25 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string s_name)
{
    name = s_name;
}

void HumanB::setWeapon(Weapon choice)
{
    sward = choice;
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << sward.getType() << "\n";
}
