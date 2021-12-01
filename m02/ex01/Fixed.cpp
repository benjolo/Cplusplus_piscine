#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fix = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	fix = (value << fract);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	fix = roundf(value * (1 << fract));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	fix = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return(this->fix);
}

void Fixed::setRawBits( int const fix)
{
	this->fix = fix;
}

int Fixed::toInt(void)const
{
	return(fix >> fract);
}

float Fixed::toFloat(void)const
{
	return  ((float)fix / (1 << fract));
}

std::ostream& operator<<(std::ostream & os, Fixed const & i)
{
	return(os << (i.toFloat()));
}