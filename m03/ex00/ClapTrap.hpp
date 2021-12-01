#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitPoint;
		int energyPoint;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(ClapTrap &copy);
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap &operator= (ClapTrap & uguale);
		
};


#endif