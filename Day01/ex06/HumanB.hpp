/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:26:29 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 18:26:33 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
public:
	HumanB();
	HumanB(std::string s_name);
	void attack();
	void setWeapon(Weapon choice);

private:
	Weapon sward;
	std::string name;
};

#endif
