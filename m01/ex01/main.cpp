#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie* zombie;
	int k = 12;

	zombie = zombieHorde(k, "Mario");
	for(int i = 0; i < k; i++)
		zombie[i].zombieAnnouncement();
	delete [] zombie;
}