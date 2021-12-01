#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->name = str;
}

Zombie::Zombie()
{
	/*costruttore*/
}

Zombie::~Zombie()
{
	/*distruttore*/
	std::cout << this->name << ", sto scemo, è morto." << std::endl;
}



void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::fakeZombieAnnouncement()
{
	std::cout << this->name << ": Cervelliiiiii 5GGGGGG!1!!11" << std::endl;
}

void	Zombie::realZombieAnnouncement()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}