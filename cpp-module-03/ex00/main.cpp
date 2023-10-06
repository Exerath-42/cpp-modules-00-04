#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Bobby("Bobby");
	ClapTrap Josh("Josh");

	Bobby.attack("Josh");
	Josh.takeDamage(0);

	Josh.attack("Josh");
	Bobby.takeDamage(0);

	for (int i=0; i < 10; i++)
		Bobby.beRepaired(1);
	
	Bobby.takeDamage(10);
	Bobby.takeDamage(15);
	Bobby.takeDamage(1);

	Josh.~ClapTrap();
	Bobby.~ClapTrap();
}