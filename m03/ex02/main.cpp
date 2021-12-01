#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap b("Legolas");
	FragTrap f("Cojone");

	f.printCondition();
	b.printCondition();
	b.attack("Geroboamo");
	b.guardGate();
	f.attack("Geroboamo");
	f.highFivesGuys();
	
}