#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char **argv)
{
	std::ifstream file;
	std::ofstream newFile;
	std::string nomefile;
	std::string	s1;
	std::string s2;
	std::string str;

	if (argc >= 4)
	{
		nomefile.assign(argv[1]);
		s1.assign(argv[2]);
		s2.assign(argv[3]);
		if (s1.empty() || s2.empty())
		{
			std::cout << "scrivi qualcosa pero'" << std::endl;
			return 1;
		}
		file.open(nomefile);
		if (file.is_open())
		{
			newFile.open(nomefile + ".replace");		
			while(getline(file, str))
			{
				size_t i = 0;
				i = str.find(s1, i);
				std::cout << i << std::endl;
				if(i < str.length())
				{
					str.erase(i, s1.length());
					str.insert(i, s2);
				}
				newFile << str << std::endl;
			}
		}
		else
		{
			std::cout << "Errore nell'apertura del File" << std::endl;
			return 1;
		}
		file.close();
		newFile.close();
	}
	else
	{
		std::cout << "to few argoument" << std::endl;
		return 1;
	}
	return 0;
}