/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:18:43 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/03 15:06:04 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string str_toupper(std::string inputStr)
{
    for (size_t i = 0; i < inputStr.length(); i++)
    {
        inputStr.at(i) = std::toupper(inputStr.at(i));
    }
    return (inputStr);
}

int main(int argc, char const *argv[])
{
    std::string userInput;

    if (argc == 2)
    {
        userInput = static_cast<std::string>(argv[1]);
        std::cout << str_toupper(userInput) << "\n";
    }
    return 0;
}
