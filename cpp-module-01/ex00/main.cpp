#include "Zombie.hpp"

int main(void)
{
	Zombie StackZombie = Zombie("StackZombie");
	Zombie *HeapZombie = newZombie("HeapZombie");

	StackZombie.announce();
	HeapZombie->announce();

	randomChump("Chad");

	delete HeapZombie;
}
