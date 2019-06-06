/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:36:22 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 09:36:24 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PONY__
#define __PONY__

#include <iostream>
#include <string>
class Pony
{
private:
    /* data */
    std::string name;
    std::string weapon;

public:
    Pony();
    Pony(std::string ponyName, std::string newWeapon);
    ~Pony();
    void setName(std::string name);
    std::string getName() const;
    void changeWeapon(std::string weaponName);
    std::string viewWeapon() const;
    std::string useWeapon();
};

#endif
