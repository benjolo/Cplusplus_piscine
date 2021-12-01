#include "Data.hpp"

int main()
{
	Data* data = new Data;
	uintptr_t uni = serialize(data);
	Data *data2 = deserialize(uni);

	std::cout << serialize(data) << std::endl;
	std::cout << deserialize(uni) << std::endl;
	std::cout << serialize(data2) << std::endl;
}