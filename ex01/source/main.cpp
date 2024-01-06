#include "../header/header.hpp"

int main(void) 
{
	std::string str;
	std::vector<int> lista;
	lista = start();
	while (1)
	{
		info_display();

		getline(std::cin, str);
		std::cout << CLEAR;
		std::cout << "You chose: " << str << "\n\n" << std::endl;
		if(str == "Exit")
			break;
		else
			options(str, lista);
		std::cout << "\n" << std::endl;
	}
	std::cout << "Exiting the program" << std::endl;
	return 0;
}
