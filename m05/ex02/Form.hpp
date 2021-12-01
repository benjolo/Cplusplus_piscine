#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool b;
		unsigned const int minGradSign;
		unsigned const int minGradExec;
	public:
		Form(std::string const name, int const minGradSign, int const minGradExec);
		virtual ~Form();
		Form(Form &copy);
		Form &operator= (Form & uguale);
		const std::string getName() const;
		unsigned int getMinS();
		unsigned int getMinE();
		std::string getBool();
		void beSigned(Bureaucrat &buro);
		void execute(Bureaucrat const & executor) const;
		virtual void _execute() const = 0;
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class notSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream & os, Form & i);

#endif