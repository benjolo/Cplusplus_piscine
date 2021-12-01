#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
	Zombie* zombie;

	randomChump("Maicol");
	zombie = newZombie("Geroboamo");
	zombie->realZombieAnnouncement();
	delete zombie;
}