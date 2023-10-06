#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
    public:

        void highFivesGuys(void);
        void attack(const std::string& target);
        
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &fragtrap);
        FragTrap& operator= (const FragTrap &fragtrap);
        ~FragTrap();

};

#endif