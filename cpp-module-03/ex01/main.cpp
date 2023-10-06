#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Bobby("Bobby");
	ScavTrap Max("Max");

	Bobby.attack("Max");
	Max.takeDamage(0);

	Max.attack("Bobby");
	Bobby.takeDamage(20);

	for (int i=0; i < 50; i++)
		Max.beRepaired(1);

	Max.guardGate();

	Max.takeDamage(200);
	Max.takeDamage(1);
	
}