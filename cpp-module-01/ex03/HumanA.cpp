#include "HumanA.hpp"

void HumanA::attack()
{
	std::string weapon_type = this->_weapon.getType();

	std::cout << this->_name << " attacks with their " <<  weapon_type << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
	this->_weapon = weapon;
}

HumanA::~HumanA(void){}
