#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <stdio.h>
#include <cmath>

void printa(int int_, float float_, double double_, char char_)
{
	double decimal;

	if(double_ > INT_MAX || double_ < INT_MIN || isnan(double_) || isinf(double_))
		std::cout << "Int: " << "impossible" << std::endl;
	else
		std::cout << "Int: " << int_ << std::endl;
	if ((double_ < __FLT_MIN__ || double_ > __FLT_MAX__) && (!isnan(float_) && !isinf(float_)) && float_)
		std::cout << "float: " << "impossible" << std::endl;
	else if(!modf(float_, &decimal) && !isnan(float_) && !isinf(float_))
		std::cout << "Float: "<< std::setprecision(7) << float_ << ".0f" << std::endl;
	else
		std::cout << "Float: "<< std::setprecision(7) << float_ << "f" << std::endl;
	if (!modf(double_, &decimal) && !isnan(double_) && !isinf(double_))
		std::cout << "double: " << std::setprecision(16) << double_ << ".0" << std::endl;
	else
		std::cout << "double: " << std::setprecision(16) << double_ << std::endl;
	if (isprint(char_))	
		std::cout << "Char: "<< char_ << std::endl;
	else
		std::cout << "Char: Non displayable" << std::endl;
}

bool isInt(std::string str)
{
	if ((str[0] != '-' && str[0] != '+' && !isdigit(str[0])) || ((str[0] == '-' || str[0] == '+') && str.length() == 1))
		return false;
	size_t i = 1;
	for( ; i < str.length() && isdigit(str[i]); i++)
		continue ;
	if (i == str.length())
		return true;
	else
		return false;
}

void doInt(std::string str)
{
	char char_ = 0;
	float float_ = 0;
	double double_ = 0;
	int int_ = 0;

	double_ = atof(str.c_str());
	int_ = static_cast<int>(double_);
	float_ = static_cast<float>(double_);
	char_ = static_cast<char>(double_);
	std::cout << "INT" << std::endl;
	printa(int_, float_, double_, char_);
}

bool isFloat(std::string str)
{
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return true;
	if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
		return false;
	int f = 0;
	int p = 0;
	for (size_t i = 1; i < str.length(); i++)
	{
		if(str[i] == '.')
			p++;
		if (str[i] == 'f' && i == str.length() - 1)
			f++;
		if (!isdigit(str[i]) && str[i] != 'f' && str[i] != '.')
			return false;
	}
	if (p == 1 && f == 1)
		return true;
	else 
		return false;
}

void doFloat(std::string str)
{
	char char_ = 0;
	float float_ = 0;
	double double_ = 0;
	int int_ = 0;

	double_ = atof(str.c_str());
	int_ = static_cast<int>(double_);
	float_ = static_cast<float>(double_);
	char_ = static_cast<char>(double_);
	std::cout << "FLOAT" << std::endl;
	printa(int_, float_, double_, char_);
}

bool isDouble(std::string str)
{
	int p = 0;
	if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return true;
	if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
		return false;
	for (size_t i = 1; i < str.length(); i++)
	{
		if(str[i] == '.')
			p++;
		if (!isdigit(str[i]) && str[i] != '.')
			return false;
	}
	if (p == 1)
		return true;
	else 
		return false;	
}

void doDouble(std::string str)
{
	char char_ = 0;
	float float_ = 0;
	double double_ = 0;
	int int_ = 0;

	double_ = atof(str.c_str());
	int_ = static_cast<int>(double_);
	float_ = static_cast<float>(double_);
	char_ = static_cast<char>(double_);
	std::cout << "DOUBLE" << std::endl;
	printa(int_, float_, double_, char_);
}

bool isChar(std::string str)
{
	if (str.length() == 1 && isprint(str[0]))
		return true;
	else
		return false;
}

void doChar(std::string str)
{
	char char_ = 0;
	float float_ = 0;
	double double_ = 0;
	int int_ = 0;

	char_ = str[0];
	int_ = static_cast<int>(char_);
	float_ = static_cast<float>(char_);
	double_ = static_cast<double>(char_);
	std::cout << "CHAR" << std::endl;
	printa(int_, float_, double_, char_);
}

int cheTipo(std::string str)
{
	if(isInt(str))
		return(0);
	else if(isFloat(str))
		return(1);
	else if (isDouble(str))
		return(2);
	else if(isChar(str))
		return(3);
	else
		return (4);
}

void castFunc(std::string str)
{
	int i = cheTipo(str);
	switch (i)
	{
	case 0:
		doInt(std::string (str));
		break;
	case 1:
		doFloat(std::string (str));
		break;
	case 2:
		doDouble(std::string (str));
		break;
	case 3:
		doChar(std::string (str));
		break;	
	case 4:
		std::cout << "not valid imput" << std::endl;
		break;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
		castFunc(argv[1]);
}