#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
    std::cout << "Cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &Cat)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat assignment constructor called" << std::endl;
	type = rhs.getType();
	this->brain = new Brain();
    *this->brain = *(rhs.brain);
    	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
} 

Cat::~Cat()
{
	delete this->brain;
    std::cout << "Cat destructor called." << std::endl;
}