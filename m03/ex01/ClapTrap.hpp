#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoint;
		unsigned int energyPoint;
		unsigned int attackDamage;
	public:
		ClapTrap();
		ClapTrap(ClapTrap &copy);
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(std::string target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printCondition();
		std::string getName();
		unsigned int getHitPoint();
		ClapTrap &operator= (ClapTrap & uguale);
};


#endif