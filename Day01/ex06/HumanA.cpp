/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:26:01 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 18:26:03 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
}

HumanA::HumanA(std::string s_name, Weapon choice)
{
	name = s_name;
	sward = choice;
}

void HumanA::attack()
{
	std::cout << name << " attacks with his ";
	std::cout << sward.getType() << "\n";
}
