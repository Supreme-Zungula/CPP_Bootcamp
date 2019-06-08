/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:27:09 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 18:27:12 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string s_type)
{
	type = s_type;
}

const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string s_type)
{
	type = s_type;
}
