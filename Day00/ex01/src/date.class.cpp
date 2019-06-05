/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:55:27 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/04 13:55:32 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/date.class.hpp"

Date::Date() {}

Date::Date(int dd, int mm, int yy)
{
    if ((dd >= 1 && dd <= 31) && (mm >= 1 && mm <= 12) && (year >= 1900))
    {
        if (mm == 2 && dd > 29)
        {
            std::cout << "Come on February does not have more than 29 days\n";
        }
        this->day = dd;
        this->month = mm;
        this->year = yy;
    }
    else
    {
        std::cout << "Day, month or Year is invalid\n";
    }
}

Date::~Date()
{
}

void Date::setDay(int day)
{
    if (day >= 1 && day <= 31)
    {
        this->day = day;
    }
    else
    {
        std::cout << "Day must be between 1 and 31\n";
    }
}

int Date::getDay() const
{
    return (day);
}

void Date::setMonth(int mon)
{
    if (mon >= 1 && mon <= 12)
    {
        month = mon;
    }
    else
    {
        std::cout << "Month must be between 1 and 12\n";
    }
}

int Date::getMonth() const
{
    return (month);
}

void Date::setYear(int year)
{
    if (year >= 1900)
    {
        this->year = year;
    }
    else
    {
        std::cout << "Year must be >= 1900 otherwise you are too old. You should be dead\n";
    }
}

int Date::getYear() const
{
    return (year);
}
