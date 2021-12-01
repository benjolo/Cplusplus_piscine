#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

enum tipiForm
{
	Shrubbery,
	Robotomy,
	Presidential,
	DEFAULT
};

class Intern
{
	private:
		tipiForm tipo;
		std::string arr[3];
	public:
		Intern();
		~Intern();
		void getCase(std::string caso);
		Form* makeForm(std::string form, std::string target);
		class FormNotFound : public std::exception
		{
			virtual const char* what() const throw();
		};
};


#endif