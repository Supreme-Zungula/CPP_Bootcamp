/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:26:10 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 18:26:11 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
public:
	HumanA();
	HumanA(std::string s_name, Weapon choice);
	void attack();

	Weapon sward;

private:
	std::string name;
};

#endif
