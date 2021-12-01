#include "Rubrica.hpp"

Rubrica::Rubrica()
{
}

Rubrica::~Rubrica()
{
}

static int numeroGiusto(std::string str)
{
	int i = 0;

	while(str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static std::string taglia( std::string str )
{
    if (str.length() > 10)
         return str.substr(0, 9) + ".";
    return str;
}

void	Rubrica::addContact(Contatti lista[8], int i)
{
	std::cout << "Inserisci nome: ";
	std::string nome;
	std::cin >> nome;
	lista[i].setNome(nome);
	std::cout << "Inserisci cognome: ";
	std::string cognome;
	std::cin >> cognome;
	lista[i].setCognome(cognome);
	std::cout << "Inserisci Nickname: ";
	std::string nickname;
	std::cin >> nickname;
	lista[i].setNickname(nickname);
	std::cout << "Inserisci un segretino: ";
	std::string segretino;
	std::cin >> segretino;
	lista[i].setSegretino(segretino);
	while (1)
	{		
		std::cout << "Inserisci numero: ";
		std::string numero;
		std::cin >> numero;
		if (numeroGiusto(numero))
		{
			lista[i].setNumero(numero);
			break ;
		}
		else
			std::cout << "Numero non valido" << std::endl;
	}
}

void	Rubrica::searchContact(Contatti lista[8], int id)
{
	if (id >= 8)
		id = 8;
	if (id == 0)
	{
		std::cout << "Non c'è nessuno contatto presente.\n";
		return ;
	}
	std::cout << "|0.|   0   Nome|   Cognome|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int k = 0; k < id; k++)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout << k << "|";
		std::cout.width(10);
		std::cout << taglia(lista[k].getNome()) << "|";
		std::cout.width(10);
		std::cout << taglia(lista[k].getCognome()) << "|";
		std::cout.width(10);
		std::cout << taglia(lista[k].getNickname()) << "|";
		std::cout << std::endl;
	}
	while(1)
	{		
		std::string info;
		std::cout << "Se vuoi vedere un contatto inserisci un numero da 0 a " << (id - 1) << ": ";
		std::cin >> info;
		int i = info[0] - 48;
		if (isdigit(info[0]) && i >= 0 && i <= 7 && i <= id)
		{
			std::cout << "Nome: " << lista[i].getNome() << std::endl;
			std::cout << "Cognome: " << lista[i].getCognome() << std::endl;
			std::cout << "Nickname: " << lista[i].getNickname() << std::endl;
			std::cout << "Numero: " << lista[i].getNumero() << std::endl;
			std::cout << "Segretuccio: " << lista[i].getSegretino() << std::endl;
			break ;
		}
		else
			std::cout << "Ma che è sta roba" << std::endl;
	}
}
