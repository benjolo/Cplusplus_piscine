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
		const int minGradSign;
		const int minGradExec;
	public:
		Form(const std::string name, const int minGradSign, const int minGradExec);
		~Form();
		Form(Form &copy);
		Form &operator= (Form & uguale);
		std::string getName();
		int getMinS();
		int getMinE();
		std::string getBool();
		void beSigned(Bureaucrat &buro);
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
};

std::ostream& operator<<(std::ostream & os, Form & i);

#endif