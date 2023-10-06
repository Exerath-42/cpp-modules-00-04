#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
	std::cout << "Assignment constructor called" << std::endl;
	this->type = dog.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "WOF WOF" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}
