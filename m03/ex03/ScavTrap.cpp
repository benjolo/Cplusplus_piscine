#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "[Scav] Ciao sono " << this->getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[Scav] Ciao sono " << this->getName() << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " in versione Scav è morto" << std::endl;
}

void ScavTrap::attack(std::string target)
{
	std::cout << name << " attacca " << target << " causando " << attackDamage << " danni." << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << name << " è entrato in modalitá Gate keeper" << std::endl;
}

ScavTrap & ScavTrap::operator= (ScavTrap &uguale)
{
	this->name = uguale.name;
	this->hitPoint = uguale.hitPoint;
	this->energyPoint = uguale.energyPoint;
	this->attackDamage = uguale.attackDamage;

	return(*this);
}