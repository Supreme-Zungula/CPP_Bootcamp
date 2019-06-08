/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:47:58 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 17:48:00 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created.\n";
}

Brain::~Brain()
{
    std::cout << "Brain destroyed.\n";
}

std::string Brain::identify()
{
    std::stringstream stream;
    stream << this;
    return (stream.str());
}