#include "Intern.hpp"

Intern::Intern()
{
	this->arr[0] = "Shrubbery";
	this->arr[1] = "Robotomy";
	this->arr[2] = "Presidential";
}

Intern::~Intern()
{
}

void Intern::getCase(std::string caso)
{
	int i = 0;
	for ( ; i < 3; i++)
		if (!caso.compare(this->arr[i]))
			break;
	switch (i)
	{
	case 0:
		this->tipo = Shrubbery;
		break;
	case 1:
		this->tipo = Robotomy;
		break;
	case 2:
		this->tipo = Presidential;
		break;
	default:
		this->tipo = DEFAULT;
		break;
	}
}

Form * Intern::makeForm(std::string form, std::string target)
{
	getCase(form);
	switch (tipo)
	{
	case Shrubbery:
		std::cout << "Intern create a Shrubbery" << std::endl;
		return(new ShrubberyCreationForm(target));
	case Robotomy:
		std::cout << "Intern create a Robotomy" << std::endl;
		return(new RobotomyRequestForm(target));
	case Presidential:
		std::cout << "Intern create a Pardon" << std::endl;
		return(new PresidentialPardonForm(target));
	case DEFAULT:
		throw FormNotFound();
	}
}

const char* Intern::FormNotFound::what() const throw()
{
	return "Form not found";
}