
#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = (0 << _bits);
    return;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed = n << _bits;
    return;
}

Fixed::Fixed(float const f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed = roundf(f * (1 << _bits));
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixed = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const { return this->_fixed; }

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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

const int Fixed::_bits = 8;