
#include "Fixed.hpp"

Fixed::Fixed() : integer(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->integer;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->integer = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->integer = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const int integer) : integer(integer << Fixed::fractional)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating) : integer(roundf(floating * (1 << Fixed::fractional)))
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (float)(this->integer >> Fixed::fractional);
}

int Fixed::toInt(void) const
{
	return this->integer >> Fixed::fractional;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
