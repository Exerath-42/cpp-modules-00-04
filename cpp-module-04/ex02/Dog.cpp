#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();
    std::cout << "Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog assignment constructor called" << std::endl;
	type = rhs.getType();
	this->brain = new Brain();
    *this->brain = *(rhs.brain);
    	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "WOF WOF" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
} 

Dog::~Dog()
{
	delete this->brain;
    std::cout << "Dog destructor called." << std::endl;
}
