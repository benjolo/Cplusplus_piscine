#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &copia);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &uguale);
		~ShrubberyCreationForm();
		void _execute() const;
};

#endif