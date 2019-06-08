/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:07:37 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 11:07:40 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_EVENT__
# define __ZOMBIE_EVENT__

#include "Zombie.hpp"

class ZombieEvent
{
private:
    /* data */

public:
    ZombieEvent(/* args */);
    ~ZombieEvent();
    void setZombieType(Zombie *ZombiePtr, std::string zombieType);
    Zombie *newZombie(std::string name);
    void randomChump();
};

#endif