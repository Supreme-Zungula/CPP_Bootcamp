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

int main()
{
    Zombie *newZombie = new Zombie();
    ZombieEvent zombieEvent;

    std::cout << "Created newZombie\n";
    newZombie->announce();
    newZombie->setType("Japanese");
    newZombie->setName("Subaru");
    newZombie->announce();

    std::cout << "\n";
    zombieEvent.setZombieType(newZombie, "Prime");
    newZombie->announce();
    delete newZombie;

    Zombie *pietZombie = zombieEvent.newZombie("Optimus");
    std::cout << "\nCreate a zombie with ZombieEvent.newZombie().\n";
    pietZombie->announce();
    zombieEvent.setZombieType(pietZombie, "Prime");
    pietZombie->announce();
    delete pietZombie;

    std::cout << "\n";
    std::cout << "Random Zombie names:\n";
    srand(time(NULL));

    for (size_t count = 0; count < 5; count++)
    {
        zombieEvent.randomChump();
    }
    return 0;
}
