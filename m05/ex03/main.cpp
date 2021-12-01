#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat a("Nicco", 1);
		Bureaucrat b("Benjo", 135);
		Bureaucrat d("Tiziano", 20);
		Bureaucrat e("Valerio", 150);
		Form *scf, *rrf, *ppf;
		Intern intern;
		scf = intern.makeForm("Shrubbery", "home");
		rrf = intern.makeForm("Robotomy", "Jesus");
		ppf = intern.makeForm("Presidential", "Paoletto");
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		//Form g("Request", 1, 1);

		e.execForm(*scf);
		a.execForm(*scf);
		a.signForm(*scf);
		a.signForm(*rrf);
		a.signForm(*ppf);
		e.execForm(*scf);
		b.execForm(*scf);
		b.execForm(*rrf);
		d.execForm(*rrf);
		d.execForm(*ppf);
		a.execForm(*ppf);
		//rrf = intern.makeForm("jkgnre", "Bender");
		delete rrf;
		delete scf;
		delete ppf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}