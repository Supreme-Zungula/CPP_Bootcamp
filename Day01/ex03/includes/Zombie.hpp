/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:07:13 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 11:07:18 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__
# define __ZOMBIE__

#include <iostream>
#include <string>

class Zombie
{
private:
    /* data */
    std::string _name;
    std::string _type; 

public:
    Zombie(/* args */);
    ~Zombie();
    void announce() const;
    void setName(std::string name);
    std::string getName() const;
    void setType(std::string type);
    std::string getType();
};

#endif
