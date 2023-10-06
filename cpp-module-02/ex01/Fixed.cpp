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

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (1 << this->fractionalBits));;
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
	// std::cout << "getRawBits called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const value)
{
	// std::cout << "setRawBits called" << std::endl;
	this->value = value;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (1 << this->fractionalBits));
}

int Fixed::toInt( void ) const
{
	return (this->value >> this->fractionalBits);
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}
