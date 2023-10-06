#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = wrongcat;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "Assignment constructor called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "*Wrong cat sound*" << std::endl;
}


WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}