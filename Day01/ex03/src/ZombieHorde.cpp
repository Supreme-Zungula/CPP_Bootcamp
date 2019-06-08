/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:56:49 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 15:56:53 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "../includes/ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
    size = 0;
    horde = nullptr;
}

ZombieHorde::ZombieHorde(int N)
{
    size = N;
    int count = 0;
    int typeIndex;
    int nameIndex;

    std::string names[] = {
        "Zhin",
        "Jenos",
        "Androxus",
        "Vivian",
        "Furia",
        "Lian"
    };
    std::string types[] = {"Flank", "Support", "Tank", "Damage"};
    srand(time(NULL));

    while (count < size)
    {
        Zombie *newZombie = new Zombie();
        nameIndex = rand() % 6;
        typeIndex = rand() % 4;
        newZombie->setName(names[nameIndex]);
        newZombie->setType(types[typeIndex]);
        horde[count] = newZombie;
        count++;
    }
}

void ZombieHorde::announce()
{
    int count = 0;

    while (count < size)
    {
        horde[count]->announce();
        count++;
    }
}
ZombieHorde::~ZombieHorde()
{
    int count = 0;

    if (horde[0])
    {
        while (count < size)
        {
            delete horde[count];
            count++;
        }
    }
    std::cout << "A horde of zombies has been destroyed.\n";
}
