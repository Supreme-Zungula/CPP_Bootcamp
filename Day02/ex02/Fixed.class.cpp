
#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
    this->_fixed = (0 << _bits);
    return;
}

Fixed::Fixed(int const n)
{
    this->_fixed = n << _bits;
    return;
}

Fixed::Fixed(float const f)
{
    this->_fixed = roundf(f * (1 << _bits));
    return;
}

Fixed::Fixed(Fixed const &src)
{
    *this = src;
    return;
}

Fixed::~Fixed(void)
{
    return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    if (this != &rhs)
        this->_fixed = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const { return this->_fixed; }

void Fixed::setRawBits(int const raw)
{
    this->_fixed = raw;
}

float Fixed::toFloat(void) const
{
    return (((float)this->_fixed) / (1 << _bits));
}

int Fixed::toInt(void) const
{
    return ((this->_fixed) / (1 << _bits));
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

bool Fixed::operator>(Fixed const &rhs)
{
    if (this != &rhs)
        if (_fixed > rhs.getRawBits())
            return true;
    return false;
}

bool Fixed::operator<(Fixed const &rhs)
{
    if (this != &rhs)
        if (_fixed < rhs.getRawBits())
            return true;
    return false;
}

bool Fixed::operator>=(Fixed const &rhs)
{
    if (this != &rhs)
        if (_fixed >= rhs.getRawBits())
            return true;
    return false;
}

bool Fixed::operator<=(Fixed const &rhs)
{
    if (this != &rhs)
        if (_fixed <= rhs.getRawBits())
            return true;
    return false;
}

bool Fixed::operator==(Fixed const &rhs)
{
    if (this != &rhs)
        if (_fixed == rhs.getRawBits())
            return true;
    return false;
}

bool Fixed::operator!=(Fixed const &rhs)
{
    if (this != &rhs)
        if (_fixed == rhs.getRawBits())
            return true;
    return false;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++()
{
    _fixed++;
    return *this;
}

Fixed &Fixed::operator--()
{
    _fixed--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++*this;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --*this;
    return temp;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() < b.toFloat())
        return a;
    return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() < b.toFloat())
        return b;
    return a;
}

const int Fixed::_bits = 8;