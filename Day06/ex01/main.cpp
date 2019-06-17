/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fledwaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:51:27 by fledwaba          #+#    #+#             */
/*   Updated: 2019/06/13 16:51:29 by fledwaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

void    *serialize( void )
{
    Data    *value = new Data;
    std::string array;
    char    alphanumerical[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
 
    srand(time(NULL));

    for(int i = 0; i < 8; i++)
    {
        value->s1 = value->s1 + alphanumerical[rand() % 62];
    }
    
    value->n = rand() % 2147483647;
    
    for(int j = 0; j < 8; j++)
    {
        value->s2 = value->s2 + alphanumerical[rand() % 62];      
    }
    
    
    return (value);
}

Data        *deserialize(void *raw)
{
    Data *result;
    try
    {
        result = reinterpret_cast<Data*>(raw);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (result);
}

int     main()
{
    void    *raw;
    Data    *value;

    raw = serialize();
    value = deserialize(raw);

    std::cout<<"s1: "<<value->s1<<std::endl;
    std::cout<<"n: "<<value->n<<std::endl;
    std::cout<<"s2: "<<value->s2<<std::endl;
    return (0);
}