#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string str);
		void fakeZombieAnnouncement();
		void realZombieAnnouncement();
		void setName(std::string name);
};



#endif