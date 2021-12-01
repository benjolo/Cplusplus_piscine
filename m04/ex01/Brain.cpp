#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain &copy)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	std::cout << "Brain copy" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator= (const Brain& brain)
{
	if (this == &brain)
		return (*this);
	for(int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
	std::cout << "Brain operator" << std::endl;
	return(*this);
}
