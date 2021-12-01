#ifndef RUBRICA_HPP
# define RUBRICA_HPP
# include "Contatti.hpp"

class Rubrica
{
	public:
		Rubrica();
		~Rubrica();
		void	addContact(Contatti lista[8], int i);
		void	searchContact(Contatti lista[8], int k);
		Contatti lista[8];
};

#endif