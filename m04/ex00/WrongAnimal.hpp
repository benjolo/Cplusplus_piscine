#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal &copy);
		~WrongAnimal();
		WrongAnimal &operator= (WrongAnimal & uguale);
		void makeSound() const;
		std::string getType() const;
};

#endif