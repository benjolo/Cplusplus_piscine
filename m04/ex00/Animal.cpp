#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Bestia";
	std::cout << "Animale " << type << " creato." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animale " << type << " creato." << std::endl;
}

Animal::Animal(Animal &copy)
{
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animale " << type << " ucciso." << std::endl;
}

Animal & Animal::operator= (Animal &uguale)
{
	this->type = uguale.type;

	return(*this);
}

void Animal::makeSound() const
{
	std::cout << "ggffff tzzzzz.. versi strani" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}