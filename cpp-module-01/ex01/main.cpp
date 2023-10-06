#include "Zombie.hpp"

int main(void)
{
	Zombie* newzombies;

	newzombies = zombieHorde(20, "123namename");
	delete[] newzombies;
	return (0);
}