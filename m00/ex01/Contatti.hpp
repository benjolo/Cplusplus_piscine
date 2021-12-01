#ifndef CONTATTI_HPP
# define CONTATTI_HPP
# include <string>
# include <iostream>

class Contatti
{
	private:
		std::string nome;
		std::string cognome;
		std::string nickname;
		std::string segretino;
		std::string numero;
	public:
		Contatti();
		~Contatti();
		std::string getNome();
		void	setNome(std::string nome);
		std::string getCognome();
		void	setCognome(std::string cognome);
		std::string getNickname();
		void	setNickname(std::string nickname);
		std::string getSegretino();
		void	setSegretino(std::string segretino);
		std::string getNumero();
		void	setNumero(std::string numero);
};

#endif