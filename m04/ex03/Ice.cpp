#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& copy) : AMateria(copy.getType())
{	
}

Ice& Ice::operator= (const Ice& uguale)
{
	this->type = uguale.getType();
	return *this;
}

Ice* Ice::clone() const
{
	Ice *ice = new Ice(*this);
	return ice;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter& target)
{
	std::cout << "Hanno tirato una palla di neve a " + target.getName() << std::endl;
}