#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public:

        void guardGate();
        void attack(const std::string& target);
        
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &ScavTrap);
        ScavTrap& operator= (const ScavTrap &ScavTrap);
        ~ScavTrap();

};

#endif