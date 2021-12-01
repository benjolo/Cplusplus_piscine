#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->name = "ScemoSupremo";
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "[Monster] Ciao sono " << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "[Monster] Ciao sono " << name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy)
{
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "'ARRRGH!' " << this->name << " Sta morendo!" << std::endl;
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

DiamondTrap & DiamondTrap::operator= (DiamondTrap &uguale)
{
	this->name = uguale.name;
	this->hitPoint = uguale.hitPoint;
	this->energyPoint = uguale.energyPoint;
	this->attackDamage = uguale.attackDamage;

	return(*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "HI! io sono " << this->name << " o forse no.. mi sa che mi chiamo " << this->getName() << ". Almeno penso." << std::endl;
}