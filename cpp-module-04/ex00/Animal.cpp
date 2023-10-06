#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called." << std::endl;
	this->type = "Type not selected.";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Assignment constructor called" << std::endl;
	this->type = animal.type;
	return (*this);
}

std::string const	&Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "*sound of some animal*" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}