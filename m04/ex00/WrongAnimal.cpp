#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Bestia";
	std::cout << "WrongAnimale " << type << " creato." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimale " << type << " creato." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimale " << type << " ucciso." << std::endl;
}

WrongAnimal & WrongAnimal::operator= (WrongAnimal &uguale)
{
	this->type = uguale.type;

	return(*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "ggffff tzzzzz.. versi strani" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}