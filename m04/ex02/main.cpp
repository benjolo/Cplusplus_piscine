#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//Animal ciao;// non si puo fare
	Cat miao("MIAONE");

	miao.makeSound(); //tutto il resto si
	return 0;
}