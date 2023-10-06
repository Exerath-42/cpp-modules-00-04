#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
	this->name = name;
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{

	this->name = claptrap.name;
	this->hp = claptrap.hp;
	this->energy = claptrap.energy;
	this->damage = claptrap.damage;

	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy < 1)
	{
		std::cout << "ClapTrap " << this->name << " has no more energy points!" << std::endl;
		return ;
	}

	this->energy--;

	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " <<\
	 this->damage << " points of damage!" << std::endl;
	
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{

	if (this->hp <= 0)
	{
		std::cout << "ClapTrap " << this->name << " already destroyed!" << std::endl;
		return ;
	}
	else if ((int)amount > this->hp)
	{
		this->hp -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
		std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
		return ;
	}
	else
	{
		this->hp -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
	}
	return ;
}


void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy < 1)
	{
		std::cout << "ClapTrap " << this->name << " has no more energy points!" << std::endl;
		return ;
	}
	this->energy--;
	this->hp += amount;

	std::cout << amount << " ClapTrap " << this->name <<  " hp have been repaired!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " removed!" << std::endl;
}
