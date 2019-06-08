/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:47:49 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 17:47:51 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify()
{
    return (brain.identify());
}

Brain &Human::getBrain()
{
    return (brain);
}
