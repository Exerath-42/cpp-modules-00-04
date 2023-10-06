#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Bobby("Bobby");
	ScavTrap Max("Max");
	FragTrap Rick("Rick");

	Rick.highFivesGuys();

	std::cout << std::endl << "*It was a trap*" << std::endl << std::endl;

	Rick.attack("Bobby");
	Bobby.takeDamage(30);

	std::cout << std::endl << "Oh no! BOBYYYYYYYYYYYYYYY!!!" << std::endl << std::endl;
	Max.guardGate();

	Rick.takeDamage(1); 
	
	for (int i=0; i < 6; i++)
	{
		Max.attack("Rick");
		Rick.takeDamage(20);
	}
}
