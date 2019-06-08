
#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed(void);
    Fixed(int const n);
    Fixed(float const f);
    Fixed(Fixed const &src);
    ~Fixed(void);

    Fixed &operator=(Fixed const &rhs);

    bool operator>(Fixed const &rhs);
    bool operator<(Fixed const &rhs);
    bool operator>=(Fixed const &rhs);
    bool operator<=(Fixed const &rhs);
    bool operator==(Fixed const &rhs);
    bool operator!=(Fixed const &rhs);

    Fixed operator+(Fixed const &rhs) const;
    Fixed operator-(Fixed const &rhs) const;
    Fixed operator*(Fixed const &rhs) const;
    Fixed operator/(Fixed const &rhs) const;

    Fixed &operator++();
    Fixed &operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    static const Fixed &min(Fixed const &a, Fixed const &b);
    static const Fixed &max(Fixed const &a, Fixed const &b);

private:
    int _fixed;
    static const int _bits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif