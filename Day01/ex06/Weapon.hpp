/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:26:59 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 18:27:02 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string s_type);
	const std::string &getType();
	void setType(std::string s_type);

private:
	std::string type;
};

#endif
