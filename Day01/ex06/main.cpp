/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:27:21 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 18:27:22 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main()
{

Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();

return (0);
}
