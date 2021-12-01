#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		//Dog(std::string name);
		Dog(Dog &copy);
		virtual ~Dog();
		Dog &operator= (Dog & uguale);
		void makeSound() const;
};

#endif