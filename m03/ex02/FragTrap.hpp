#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap & copy);
		~FragTrap();
		void attack(std::string target);
		void highFivesGuys(void);
		FragTrap &operator= (FragTrap & uguale);
};


#endif