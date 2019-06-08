/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:09:15 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 11:09:18 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include "../includes/ZombieEvent.hpp"
#include "../includes/ZombieHorde.hpp"

int main()
{
    ZombieHorde horde(10);
    horde.announce();
    std::cout << "\n";

    return 0;
}
