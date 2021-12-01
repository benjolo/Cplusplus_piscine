#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	if (grade > 150)
		throw  GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) : name(cpy.getName())
{
    *this = cpy;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat &rhs)
{
    grade = rhs.getGrade();
    return (*this);
}

void Bureaucrat::signForm(Form &form)
{
	if (this->grade > form.getMinS())
	{
		std::cout << this->getName() << " Cannot sign " << form.getName() << " because ";
		throw GradeTooHighException();
	}
	else
	{
		form.beSigned(*this);
		std::cout << this->getName() + " Signs " + form.getName() << std::endl;
	}
}

std::string Bureaucrat::getName()
{
	return(this->name);
}

int Bureaucrat::getGrade()
{
	return(this->grade);
}

void Bureaucrat::increment(int i)
{
	if (getGrade() - i < 1)
		throw GradeTooLowException();
	else
	{
		grade -= i;
		std::cout<< this->getName() << " é salito al livello " << this->getGrade() << std::endl;
	}
}

void Bureaucrat::decrement(int i)
{
	if (getGrade() + i > 150)
		throw GradeTooHighException();
	else
	{
		grade += i;
		std::cout<< this->getName() << " é sceso al livello " << this->getGrade() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too damn high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream & os, Bureaucrat & i)
{
	return(os << i.getName() + ", grade: " << i.getGrade());
}