#include "HumanB.hpp"

void HumanB::attack()
{
	if (this->_weapon != NULL)
	{
		std::string &weapon_type = this->_weapon->getType();

		std::cout << this->_name << " attacks with their " <<  weapon_type << std::endl;
	}
	else
		std::cout << this->_name << " attacks attacks without a weapon" << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}

HumanB::HumanB(std::string name): _weapon(NULL)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void){}
