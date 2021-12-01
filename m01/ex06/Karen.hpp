#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

enum CasiArr
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

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
		CasiArr casiArr;
	public:
		void setCasiArr(std::string level);
		void complain( std::string level );
		Karen();
		~Karen();
};

#endif