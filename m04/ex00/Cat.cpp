#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "GattoMiao";
	std::cout << "Gatto " << type << " creato." << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	this->type = type;
	std::cout << "Gatto " << type << " creato." << std::endl;
}

Cat::Cat(Cat &copy)
{
	this->type = copy.type;
}

Cat::~Cat()
{
	std::cout << "Gatto " << type << " ucciso." << std::endl;
}

Cat & Cat::operator= (Cat &uguale)
{
	this->type = uguale.type;
	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "MIAAAAAOOOOOOOO" << std::endl;
}