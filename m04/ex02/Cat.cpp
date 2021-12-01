#include "Cat.hpp"

Cat::Cat()
{
	this->type = "GattoMiao";
	this->brain = new Brain();
	std::cout << "Gatto " << type << " creato." << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->type = type;
	this->brain = new Brain();
	std::cout << "Gatto " << type << " creato." << std::endl;
}

Cat::Cat(Cat &copy)
{
	delete this->brain;
	brain = new Brain(*copy.brain);
	type = copy.getType();
}

Cat::~Cat()
{
	std::cout << "Gatto " << type << " ucciso." << std::endl;
	delete brain;
}

Cat & Cat::operator= (Cat &uguale)
{
	if (this != &uguale)
	{
		delete brain;
		this->type = uguale.type;
		*brain = *uguale.brain;
	}
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "MIAAAAAOOOOOOOO" << std::endl;
}