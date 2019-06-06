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
    std::cout << "Created Pony object in stack memory\n";
    std::cout << pony.useWeapon() << std::endl;

    pony.changeWeapon("Hammer");
    std::cout << "Changed pony weapon.\n";
    pony.setName("Sledgehammer");
    std::cout << "Changed pony name.\n";
    std::cout << pony.useWeapon() << std::endl;
}

void heap()
{

    Pony *weaponisePony = new Pony("Jelly bean", "water gun");
    std::cout << "Created object in heap memory\n";
    std::cout << weaponisePony->useWeapon() << std::endl;
}

int main()
{
    stack();
    heap();
    return 0;
}
