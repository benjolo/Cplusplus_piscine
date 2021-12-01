#include "Base.hpp"

Base* generate(void)
{
	srand(time(NULL));
	Base* ptr = NULL;

	switch (rand() % 3)
	{
	case 0:
		ptr = new A;
		std::cout << "A created." << std::endl;
		break;
	case 1:
		ptr = new B;
		std::cout << "B created." << std::endl;
		break;
	case 2:
		ptr = new C;
		std::cout << "C created." << std::endl;
		break;
	}
	return ptr;
}

void identify(Base* p)
{
	A* ptrA = dynamic_cast<A*>(p);
	B* ptrB = dynamic_cast<B*>(p);
	C* ptrC = dynamic_cast<C*>(p);
	if (ptrA)
		std::cout << "A trovato" << std::endl;
	else if (ptrB)
		std::cout << "B trovato" << std::endl;
	else if (ptrC)
		std::cout << "C trovato" << std::endl;
	else
		std::cout << "Nada" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A baseA = dynamic_cast<A&>(p);
		std::cout << "A ritrovato" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B baseB = dynamic_cast<B&>(p);
			std::cout << "B ritrovato" << std::endl;
		}
		catch(const std::exception& e)
		{
			C baseC = dynamic_cast<C&>(p);
			std::cout << "C ritrovato" << std::endl;
		}
	}
}

int main()
{
	Base* ptr = generate();
	
	identify(ptr);
	identify(*ptr);
}