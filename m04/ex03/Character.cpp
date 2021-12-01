#include "Character.hpp"


Character::Character(const std::string &name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		inventario[i] = NULL;
}

Character::Character(Character& copy)
{
	*this = copy;
	this->name = copy.getName();
}

Character& Character::operator= (Character& uguale)
{
	for(int i = 0; i < 4; i++)
	{
		if(uguale.inventario[i])
		{
			inventario[i] = uguale.inventario[i]->clone();
		}
	}
	return(*this);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete inventario[i];
}

std::string const & Character::getName() const
{
	return(name);
}

void Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if(inventario[i] == NULL)
		{
			inventario[i] = materia->clone();
			std::cout << "Materia " + materia->getType() + " è stato aggiunto all'indice n " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventario pieno" << std::endl;
}

void Character::unequip(int indice)
{
	if (inventario[indice] != NULL)
	{
		delete inventario[indice];
		inventario[indice] = NULL;
		std::cout << "Indice Liberato" << std::endl;
		return;
	}
	else
	{
		std::cout << "Indice giá libero o inesistente" << std::endl;
		return;
	}
}

void Character::use(int indice, ICharacter& target)
{
	if(inventario[indice])
	{
		inventario[indice]->use(target);
	}
	else
		std::cout << "Slot vuota, impossibile usare." << std::endl;
}