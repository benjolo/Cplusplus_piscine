#include "Contatti.hpp"	

Contatti::Contatti()
{
};

Contatti::~Contatti()
{
};

std::string Contatti::getNome()
{
	return (this->nome);
}

void	Contatti::setNome(std::string nome)
{
	this->nome = nome;
}

std::string Contatti::getCognome()
{
	return (this->cognome);
}

void	Contatti::setCognome(std::string cognome)
{
	this->cognome = cognome;
}

std::string Contatti::getNickname()
{
	return (this->nickname);
}

void	Contatti::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string Contatti::getSegretino()
{
	return (this->segretino);
}

void	Contatti::setSegretino(std::string segretino)
{
	this->segretino = segretino;
}

std::string Contatti::getNumero()
{
	return (this->numero);
}

void	Contatti::setNumero(std::string numero)
{
	this->numero = numero;
}