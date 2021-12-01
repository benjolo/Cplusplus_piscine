#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap f("Fernandello");

	f.printCondition();
	f.attack("Geroboamo");
	f.guardGate();
	f.highFivesGuys();
	f.whoAmI();
}