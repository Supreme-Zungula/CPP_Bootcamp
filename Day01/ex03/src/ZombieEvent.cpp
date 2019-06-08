/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:08:29 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 11:08:34 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "../includes/ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
    std::cout << "Zombie event has come to an end.\n";
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    Zombie *newZombie = new Zombie();
    newZombie->setName(name);
    return (newZombie);
}

void ZombieEvent::setZombieType(Zombie *zombiePtr, std::string type)
{
    zombiePtr->setType(type);
}

void ZombieEvent::randomChump()
{
    Zombie *newZombie = new Zombie();

    std::string zombieNames[6] = {
        "Zhin",
        "Jenos",
        "Androxus",
        "Vivian",
        "Furia",
        "Lian"};

    int index = rand() % 6;

    newZombie->setName(zombieNames[index]);
    if (zombieNames[index].compare("Zhin") == 0)
    {
        newZombie->setType("Flank");
    }
    else if (zombieNames[index].compare("Jenos") == 0)
    {
        newZombie->setType("Support");
    }
    else if (zombieNames[index].compare("Androxus") == 0)
    {
        newZombie->setType("Flank");
    }
    else if (zombieNames[index].compare("Androxus") == 0)
    {
        newZombie->setType("Flank");
    }
    else if (zombieNames[index].compare("Vivian") == 0)
    {
        newZombie->setType("Damage");
    }
    else if (zombieNames[index].compare("Furia") == 0)
    {
        newZombie->setType("Angel");
    }
    else if (zombieNames[index].compare("Lian") == 0)
    {
        newZombie->setType("Royalty");
    }
    else
    {
        newZombie->setType("Paladin");
    }
    newZombie->announce();
    delete newZombie;
}