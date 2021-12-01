#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &copia);
		PresidentialPardonForm &operator=(PresidentialPardonForm &uguale);
		~PresidentialPardonForm();
		void _execute() const;
};

#endif