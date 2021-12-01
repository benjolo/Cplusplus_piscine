#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "CaneBau";
	this->brain = new Brain();
	std::cout << "Cane " << type << " creato." << std::endl;
}

/*Dog::Dog(std::string type) : Animal(type)
{
	this->type = type;
	this->brain = new Brain();
	std::cout << "Cane " << type << " creato." << std::endl;
}*/

Dog::Dog(Dog &copy)
{
	delete this->brain;
	brain = new Brain(*copy.brain);
	type = copy.getType();
}

Dog::~Dog()
{
	std::cout << "Cane " << type << " ucciso." << std::endl;
	delete brain;
}

Dog & Dog::operator= (Dog &uguale)
{
	if (this != &uguale)
	{
		delete brain;
		this->type = uguale.type;
		*brain = *uguale.brain;
	}
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "BAUUUUUUUU" << std::endl;
}