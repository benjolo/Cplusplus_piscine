#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copia) : Form(copia)
{
	*this = copia;
}

RobotomyRequestForm & RobotomyRequestForm::operator= (RobotomyRequestForm &uguale)
{
	Form::operator=(uguale);
	this->target = uguale.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::_execute() const
{
	srand(time(NULL));
	int ran = rand()%2;
	if (ran)
		std::cout << this->target << ".. bzzzz bzzzz." << std::endl;
	else
		std::cout << this->target << " robotomized fail." << std::endl;

}