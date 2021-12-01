#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default";
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 5;
	std::cout << "[Clap] Ciao sono " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << name << " Attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " Take " << amount << " point of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " Drink a potion and restore " << amount << " point of HP"<< std::endl;
}

ClapTrap & ClapTrap::operator= (ClapTrap &uguale)
{
	this->name = uguale.name;
	this->hitPoint = uguale.hitPoint;
	this->energyPoint = uguale.energyPoint;
	this->attackDamage = uguale.attackDamage;

	return(*this);
}