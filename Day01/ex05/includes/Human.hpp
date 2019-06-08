/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:47:29 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 17:47:32 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMAN__
#define __HUMAN__

#include <istream>
#include "Brain.hpp"

class Human
{
private:
    Brain brain;

public:
    Human(/* args */);
    ~Human();
    std::string identify();
    Brain &getBrain();
};

#endif