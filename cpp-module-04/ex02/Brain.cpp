#include "Brain.hpp"

Brain::Brain()
{
	const std::string ideas[] = {
		"I want to eat!\n",
		"I want to sleep!\n",
		"I want to run!\n",
		"I want to destroy furniture!\n",
		"I want to fight!\n",
		"I want to look out the window!\n",
		"I want to play!\n",
		"I want attention!\n",
		"I want to go home!\n",
		"I want to go out!\n",
	};

	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[i % 10];
	}

	for (int i=90; i<100; i++)
		std::cout << " " << this->ideas[i];
    std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Assignment constructor called" << std::endl;
	for(int i=0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string const &Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}