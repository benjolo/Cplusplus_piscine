#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "CaneBau";
	std::cout << "Cane " << type << " creato." << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	this->type = type;
	std::cout << "Cane " << type << " creato." << std::endl;
}

Dog::Dog(Dog &copy)
{
	this->type = copy.type;
}

Dog::~Dog()
{
	std::cout << "Cane " << type << " ucciso." << std::endl;
}

Dog & Dog::operator= (Dog &uguale)
{
	this->type = uguale.type;
	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "BAUUUUUUUU" << std::endl;
}