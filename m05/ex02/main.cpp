#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Nicco", 1);
		Bureaucrat b("Benjo", 135);
		Bureaucrat d("Tiziano", 20);
		Bureaucrat e("Valerio", 150);
		ShrubberyCreationForm x("home");
		RobotomyRequestForm y("Jesus");
		PresidentialPardonForm z("Paoletto");
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << x << std::endl;
		std::cout << y << std::endl;
		std::cout << z << std::endl;
		//Form g("Request", 1, 1);

		e.execForm(x);
		a.execForm(x);
		a.signForm(x);
		a.signForm(y);
		a.signForm(z);
		e.execForm(x);
		b.execForm(x);
		b.execForm(y);
		d.execForm(y);
		d.execForm(z);
		a.execForm(z);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}