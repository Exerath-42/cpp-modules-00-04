#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wrongcat = new WrongCat();

	wrongcat->makeSound();

	std::cout << std::endl;
	const WrongCat* wrongcat2 = new WrongCat();

	wrongcat2->makeSound();

	std::cout << std::endl;
	delete wrongcat;
	delete wrongcat2;
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	return 0;
}
