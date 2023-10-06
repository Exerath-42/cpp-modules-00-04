#include "ScavTrap.hpp"

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	this->name = name;
    std::cout << "ScavTrap " << this->name << " created!" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if (this->energy < 1)
	{
		std::cout << "ScavTrap " << this->name << " has no more energy points!" << std::endl;
		return ;
	}

	this->energy--;

	std::cout << "ScavTrap " << this->name << " attacks " << target << " insanely, causing " <<\
	 this->damage << " points of damage!" << std::endl;
	
	return ;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "Assignment constructor called" << std::endl;

	this->name = scavtrap.name;
	this->hp = scavtrap.hp;
	this->energy = scavtrap.energy;
	this->damage = scavtrap.damage;

	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " removed!" << std::endl;
}