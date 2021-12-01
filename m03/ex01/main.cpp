#include "ScavTrap.hpp"

int main()
{
	ScavTrap b("Legolas");

	b.printCondition();
	b.attack("Geroboamo");
	b.takeDamage(5);
	b.guardGate();
}