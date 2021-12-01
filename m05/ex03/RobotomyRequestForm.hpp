#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &copia);
		RobotomyRequestForm &operator=(RobotomyRequestForm &uguale);
		~RobotomyRequestForm();
		void _execute() const;
};


#endif