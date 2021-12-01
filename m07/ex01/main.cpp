#include "iter.hpp"
#include <iostream>

template<typename T>
void print(T const & x) {
	std::cout << x << std::endl;
	return;
}

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 }; 
	std::string tab2[] = { "ciao", "1", "scemo", "babu", "babbo pasquale" }; 
	iter( tab, 5, print ); 
	iter( tab2, 5, print ); 
	return 0;
}