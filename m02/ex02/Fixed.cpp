#include "Fixed.hpp"

/*costruttori*/

Fixed::Fixed()
{
	fix = 0;
}

Fixed::Fixed(const int value)
{
	fix = (value << fract);
}

Fixed::Fixed(const float value)
{
	fix = roundf(value * (1 << fract));
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::~Fixed()
{
}

/*operatori*/

Fixed & Fixed::operator= (const Fixed &fixed)
{
	fix = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator+ (const Fixed &fixed)
{
	Fixed ret;

	ret.setRawBits(fix + fixed.fix);
	return(ret);
}

Fixed Fixed::operator- (const Fixed &fixed)
{
	Fixed ret;

	ret.setRawBits(fix - fixed.fix);
	return(ret);
}

Fixed Fixed::operator* (const Fixed &fixed)
{
	Fixed ret;

	ret.setRawBits(((fix >> 0) * (fixed.fix >> 0)) >> 8);
	return(ret);
}

Fixed Fixed::operator/ (const Fixed &fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return(ret);
}

Fixed & Fixed::operator++ () //++a
{
	fix++;
	return(*this);
}

Fixed Fixed::operator++ (int) //a++
{
	Fixed temp(*this);
	++*this;
	return(temp);
}

Fixed & Fixed::operator-- () //--a
{
	fix--;
	return(*this);
}

Fixed Fixed::operator-- (int) //a--
{
	Fixed temp(*this);
	--*this;
	return(temp);
}

bool Fixed::operator== (const Fixed &fixed)
{
	return(fix == fixed.fix && fract == fixed.fract);
}

bool Fixed::operator<= (const Fixed &fixed)
{
	return(fix <= fixed.fix);
}

bool Fixed::operator< (const Fixed &fixed)
{
	return(fix < fixed.fix);
}

bool Fixed::operator> (const Fixed &fixed)
{
	return(fix > fixed.fix);
}

bool Fixed::operator>= (const Fixed &fixed)
{
	return(fix >= fixed.fix);
}

bool Fixed::operator!= (const Fixed &fixed)
{
	return(fix != fixed.fix || fract != fixed.fract);
}

std::ostream& operator<<(std::ostream & os, Fixed const & i)
{
	return(os << (i.toFloat()));
}
/*min&max*/

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return(a.fix > b.fix ? a : b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return(a.fix < b.fix ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return(a.fix > b.fix ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return(a.fix < b.fix ? a : b);
}

/*altre funzioni*/

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

