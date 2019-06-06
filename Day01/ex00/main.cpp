/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:36:39 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 09:36:43 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
void stack()
{
    Pony pony;
    pony.useWeapon();

    pony.changeWeapon("Hammer");
    pony.setName("Sledgehammer");
    pony.useWeapon();
}

void heap()
{
    Pony *weaponisePony = new Pony("Jelly bean", "water gun");
    weaponisePony->useWeapon();
}

int main()
{
    stack();
    heap();
    return 0;
}
