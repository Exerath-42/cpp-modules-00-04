#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &Cat)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat &Cat::operator=(const Cat &Cat)
{
	std::cout << "Assignment constructor called" << std::endl;
	this->type = Cat.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
}