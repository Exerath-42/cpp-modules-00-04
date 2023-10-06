#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	this->name = name;
    std::cout << "FragTrap " << this->name << " created!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->name << " asked everyone to high five!(positive)" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->energy < 1)
	{
		std::cout << "FragTrap " << this->name << " has no more energy points!" << std::endl;
		return ;
	}

	this->energy--;

	std::cout << "FragTrap " << this->name << " attacks " << target << " on the sly, causing " <<\
	 this->damage << " points of damage!" << std::endl;
	
	return ;
}

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fragtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "Assignment constructor called" << std::endl;

	this->name = fragtrap.name;
	this->hp = fragtrap.hp;
	this->energy = fragtrap.energy;
	this->damage = fragtrap.damage;

	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " removed!" << std::endl;
}