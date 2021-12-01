#include "Form.hpp"

Form::Form(const std::string name, const int minGradSign, const int minGradExec) : name(name), minGradSign(minGradSign), minGradExec(minGradExec) 
{
	if (minGradSign > 150 || minGradExec > 150)
		throw  GradeTooHighException();
	else if (minGradSign < 1 || minGradExec < 1)
		throw GradeTooLowException();
	this->b = false;
}

Form::~Form()
{
}

std::string Form::getName()
{
	return(this->name);
}

int Form::getMinE()
{
	return(this->minGradExec);
}

int Form::getMinS()
{
	return(this->minGradSign);
}

std::string Form::getBool()
{
	if(this->b == true)
		return("Si");
	else
		return("No");
}

Form::Form(Form &cpy) : name(cpy.getName()), minGradSign(cpy.minGradSign), minGradExec(cpy.minGradExec)
{
    *this = cpy;
}

Form & Form::operator=(Form &rhs)
{
	this->b = rhs.b;
    return (*this);
}

void Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() > minGradSign)
		throw GradeTooLowException();
	this->b = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too damn high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream& operator<<(std::ostream & os, Form & i)
{
	return(os << i.getName() + ", minimo per eseguire: " << i.getMinE() << ", minimo per firmare: " << i.getMinS() << " Firmato: " << i.getBool());
}