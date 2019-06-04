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
    int i = 1;

    std::string userInput;

    if (argc >= 2)
    {
        while (i < argc)
        {
            userInput = static_cast<std::string>(argv[i]);
            if (i + 1 == argc)
            {
                std::cout << str_toupper(userInput) << "\n";
            }
            else
            {
                std::cout << str_toupper(userInput) << " ";
            }
            i++;
        }
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    return 0;
}
