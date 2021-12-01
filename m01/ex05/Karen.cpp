#include "Karen.hpp"

Karen::Karen()
{
	this->karenArray[0] = &Karen::debug;
	this->karenArray[1] = &Karen::info;
	this->karenArray[2] = &Karen::warning;
	this->karenArray[3] = &Karen::error;
	this->arr[0] = "DEBUG";
	this->arr[1] = "INFO";
	this->arr[2] = "WARNING";
	this->arr[3] = "ERROR";
}

Karen::~Karen()
{
}

void Karen::info()
{
	std::cout << "[INFO] Che voi?" << std::endl;
}

void Karen::debug()
{
	std::cout << "[DEBUG] Chi sei?" << std::endl;
}

void Karen::warning()
{
	std::cout << "[WARNING] Ma chi t'ha mandato?" << std::endl;
}

void Karen::error()
{
	std::cout << "[ERROR] Che sei na guardia?" << std::endl;
}

void Karen::complain( std::string level )
{
	for(int i = 0; i < 4; i++)
	{
		if (!level.compare(arr[i]))
		{
			(this->*karenArray[i])();
			break ;
		}
	}
}