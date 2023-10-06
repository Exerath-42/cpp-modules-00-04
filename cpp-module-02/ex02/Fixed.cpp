#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int value)
{
	this->value = value << this->fractionalBits;
}

Fixed::Fixed(const float value)
{
	this->value = (int)roundf(value * (1 << this->fractionalBits));;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &fixed)
		this->value = fixed.getRawBits();
	return (*this);
}

// ---------------COMPARISON OPERATORS---------------------

bool Fixed::operator>(const Fixed &a)
{
	return((this->value > a.value));
}

bool Fixed::operator<(const Fixed &a)
{
	return((this->value < a.value));
}

bool Fixed::operator==(const Fixed &a)
{
	return((this->value == a.value));
}

bool Fixed::operator>=(const Fixed &a)
{
	return((this->value >= a.value));
}

bool Fixed::operator<=(const Fixed &a)
{
	return((this->value <= a.value));
}

bool Fixed::operator!=(const Fixed &a)
{
	return((this->value != a.value));
}

// ---------------ARITHMETIC OPERATORS---------------------

float Fixed::operator+(Fixed a)
{
	return (this->toFloat() + a.toFloat());
}

float Fixed::operator-(Fixed a)
{
	return (this->toFloat() - a.toFloat());
}

float Fixed::operator*(Fixed a)
{
	return (this->toFloat() * a.toFloat());
}

float Fixed::operator/(Fixed a)
{
	if(a.toInt() != 0)
		return (this->toFloat() / a.toFloat());
	else throw std::runtime_error("Cannot divide by zero");
}

// ---------------ITERATION OPERATORS----------------------

Fixed &Fixed::operator++(void)
{
	this->value++;
	
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed res = *this;

	++this->value;
	return (res);
}

Fixed &Fixed::operator--(void)
{
	this->value--;
	
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed res = *this;

	--this->value;
	return (res);
}
// ---------------------------------------------------------

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.value < b.value)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.value < b.value)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.value > b.value)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.value > b.value)
		return (a);
	else
		return (b);
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
	// std::cout << "Default destructor called" << std::endl;
}
