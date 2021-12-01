#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Default";
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 5;
	std::cout << "[Clap] Ciao sono " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "[Clap] Ciao sono " << name << std::endl;
	this->name = name;
	hitPoint = 10;
	energyPoint = 10;
	attackDamage = 5;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " in versione Clap è morto" << std::endl;
}

void ClapTrap::attack(std::string target)
{
	std::cout << name << " Attack " << target << ", causing " << attackDamage << " point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " Take " << amount << " point of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " Drink a potion and restore " << amount << " point of HP" << std::endl;
}

std::string ClapTrap::getName()
{
	return(this->name);
}

void ClapTrap::printCondition()
{
	std::cout << "Nome = " << name << std::endl <<  "HitPoint = " << getHitPoint() << std::endl << "Attack = " << attackDamage << std::endl << "-----------------" << std::endl;
}

unsigned int ClapTrap::getHitPoint()
{
	return(hitPoint);
}

ClapTrap & ClapTrap::operator= (ClapTrap &uguale)
{
	this->name = uguale.name;
	this->hitPoint = uguale.hitPoint;
	this->energyPoint = uguale.energyPoint;
	this->attackDamage = uguale.attackDamage;

	return(*this);
}