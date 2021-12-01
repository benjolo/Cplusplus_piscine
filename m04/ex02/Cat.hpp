#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat &copy);
		~Cat();
		Cat &operator= (Cat & uguale);
		virtual void makeSound() const;
};


#endif