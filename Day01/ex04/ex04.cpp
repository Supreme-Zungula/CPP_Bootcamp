/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:54:07 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/06 15:54:10 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void displayRef(std::string &strRef)
{
    std::cout << strRef;
}

void displayPtr(std::string *strPtr)
{
    std::cout << *strPtr;
}
int main()
{
    std::string str = "HI THIS IS BRAIN";
    displayPtr(&str);
    std::cout << std::endl;
    displayRef(str);
    std::cout << std::endl;
    /* code */
    return 0;
}
