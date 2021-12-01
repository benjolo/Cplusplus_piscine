#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	std::string level;

	if(argc != 2)
	{
		std::cout << "servono due argomenti" << std::endl;
		return 1;
	}
	level.assign(argv[1]);
	karen.setCasiArr(level);
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
}