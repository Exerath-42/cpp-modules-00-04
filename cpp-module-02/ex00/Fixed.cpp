#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const value)
{
	std::cout << "setRawBits called" << std::endl;
	this->value = value;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}