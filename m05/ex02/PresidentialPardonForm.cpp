#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copia) : Form(copia)
{
	*this = copia;
}

PresidentialPardonForm & PresidentialPardonForm::operator= (PresidentialPardonForm &uguale)
{
	Form::operator=(uguale);
	this->target = uguale.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::_execute() const
{
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}