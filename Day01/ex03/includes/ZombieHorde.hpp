/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:55:06 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 15:55:11 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HORDE__
#define __ZOMBIE_HORDE__

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

class ZombieHorde
{
private:
    int     size;
    Zombie  **horde;
public:
    ZombieHorde(/* args */);
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();
};

#endif