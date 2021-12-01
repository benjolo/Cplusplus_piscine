#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name), grade(grade)
{
	if (grade > 150)
		throw  GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy) : name(cpy.getName()), grade(cpy.getGrade())
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

unsigned int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::increment()
{
	if (getGrade() - 1 < 1)
		throw GradeTooLowException();
	else
	{
		this->grade--;
		std::cout<< this->getName() << " é salito al livello " << this->getGrade() << std::endl;
	}
}

void Bureaucrat::decrement()
{
	if (getGrade() + 1 > 150)
		throw GradeTooHighException();
	else
	{
		grade++;
		std::cout<< this->getName() << " é sceso al livello " << this->getGrade() << std::endl;
	}
}

void Bureaucrat::execForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() + " exec the form " + form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " cannot execute form, because " << e.what() << '\n';
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