#include "Contatti.hpp"
#include "Rubrica.hpp"

int main(void)
{
	Rubrica rubrica;
	std::string str;
	int i = 0;
	int k = 0;

	std::cout << "\t\tAO\n\tBenvenuto nella tua Rubrica!\nDigita 'ADD' per aggiungere un contatto.\nDigita 'SEARCH' se vuoi cerecare un contatto.\nDigita 'EXIT' se invece vuoi uscire.\n";
	while (1)
	{
		std::cout << "Inserisci un comando: ";
		std::cin >> str;
		if (!str.compare("EXIT"))
		{
			std::cout << "ciao\n";
			break ;
		}
		else if (!str.compare("ADD") || !str.compare("a"))
		{
			rubrica.addContact(rubrica.lista, i);
			k++;
			if (i >= 7)
				i = 0;
			else
				i++;
		}
		else if (!str.compare("SEARCH") || !str.compare("s"))
			rubrica.searchContact(rubrica.lista, k);
		else if (!str.compare("I"))
			std::cout << "Digita:\n'ADD' per aggiungere,\n'SEARCH' per cerecare,\n'EXIT' per uscire.\n";
		else
			std::cout << "Comando non valido. Digita 'I' per richiedere info." << std::endl;
	}
	return (0);
}