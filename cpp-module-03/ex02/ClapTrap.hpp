#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string.h>

class ClapTrap{
	
	protected:
	
	std::string name;
	int hp;
	int energy;
	int damage;
	
	public:

	void set_stats(int hp, int energy, int damage);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string get_name();


	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &claptrap);
	ClapTrap &operator=(const ClapTrap &claptrap);
	~ClapTrap();

};

#endif