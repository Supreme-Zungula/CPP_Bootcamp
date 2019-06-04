/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   date.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:53:41 by yzungula          #+#    #+#             */
/*   Updated: 2019/06/04 13:53:45 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATECLASS__
#define __DATECLASS__

#include <iostream>

class Date
{
private:
    /* data */
    int day;
    int month;
    int year;

public:
    Date();
    Date(int dd, int mm, int yy);
    ~Date();
    void setDay(int day);
    int getDay() const;

    void setMonth(int month);
    int getMonth() const;

    void setYear(int year);
    int getYear() const;
};
#endif