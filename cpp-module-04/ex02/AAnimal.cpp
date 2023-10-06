#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor called." << std::endl;
	this->type = "Type not selected.";
}

AAnimal::AAnimal(const AAnimal &Aanimal)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Aanimal;
}

AAnimal &AAnimal::operator=(const AAnimal &Aanimal)
{
	std::cout << "Assignment constructor called" << std::endl;
	this->type = Aanimal.type;
	return (*this);
}

std::string const	&AAnimal::getType(void) const
{
	return(this->type);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called." << std::endl;
}