#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	std::cout << std::endl << std::endl;

	Animal *Zoo[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			std::cout << "+++++Dog creation " << i << "++++" << std::endl;
			Zoo[i] = new Dog();
			std::cout << "+++++++++++++++++++++++" << std::endl << std::endl;
		}
		else
		{
			std::cout << "+++++Cat creation "<< i << "++++" << std::endl;
			Zoo[i] = new Cat();
			std::cout << "+++++++++++++++++++++++" << std::endl << std::endl;
		}
	}
	std::cout << "___________Deep copy check______________" << std::endl << std::endl;
	Cat bas;
	{
	Cat tmp = bas;
	}
	std::cout << "__________Let's get some idea___________" << std::endl << std::endl;
	std::cout << bas.getBrain()->getIdea(25) << std::endl;
	std::cout << "________________________________________" << std::endl;
	Dog basic;
	{
	Dog tmp = basic;
	}
	std::cout << "__________Let's get some idea___________" << std::endl << std::endl;
	std::cout << basic.getBrain()->getIdea(25) << std::endl;
	std::cout << "________________________________________" << std::endl;

	std::cout << "______________Destruction_______________" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "________________________________________" << std::endl << std::endl;
		delete Zoo[i];
	}

	return 0;

}
