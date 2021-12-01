#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen;
typedef void (Karen::*Jump)(void);

class Karen
{
	private:
		Jump karenArray[4];
		std::string arr[4];
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain( std::string level );
		Karen();
		~Karen();
};

#endif