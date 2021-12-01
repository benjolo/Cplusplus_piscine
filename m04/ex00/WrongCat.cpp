#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "GattoMiaoFallato";
	std::cout << "WronGatto " << type << " creato." << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	this->type = type;
	std::cout << "WronGatto " << type << " creato." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WronGatto " << type << " ucciso." << std::endl;
}

WrongCat & WrongCat::operator= (WrongCat &uguale)
{
	this->type = uguale.type;
	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "MIAAAAAOOOOOOOO" << std::endl;
}