#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Mario");
	ClapTrap b("Luigi");

	a.attack("Luigi");
	b.takeDamage(0);
	b.attack("Mario");
	a.takeDamage(0);
	a.beRepaired(4);
	std::cout << "so due pippe e non riescono ad attaccare\nPer ora.." << std::endl;
}