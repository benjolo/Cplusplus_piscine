#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "[Frag] Ciao sono " << this->getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[Frag] Ciao sono " << this->getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap & copy)
{
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << name << " in versione Frag è morto" << std::endl;
}

void	FragTrap::attack(std::string target)
{
	std::cout << name << " attacks " << target << ", causing " << this->attackDamage << " damage." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << name << " wants a high five. :)" << std::endl;
}

FragTrap & FragTrap::operator= (FragTrap &uguale)
{
	this->name = uguale.name;
	this->hitPoint = uguale.hitPoint;
	this->energyPoint = uguale.energyPoint;
	this->attackDamage = uguale.attackDamage;

	return(*this);
}