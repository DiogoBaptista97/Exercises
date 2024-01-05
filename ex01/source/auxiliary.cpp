#include "../header/header.hpp"

std::vector<int> start()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 46340);//46340 is the square root of INT_MAX, after that the numbers start to repeat 

	std::cout << CLEAR;
	std::cout << "\t\tWelcome to Random number generator\n" << std::endl;
	std::cout << "\t\tGenerating a list of 10 random numbers" << std::endl;
	std::cout << "\tYour List\t\t" << std::endl;

	std::vector<int> lista;
	for(int i = 0; i < 10; i++)
	{
		lista.push_back(dis(gen));
		std::cout << lista[i] << std::endl;
	}
	return lista;

}

void options(std::string str, std::vector<int>& lista)
{
	if (str == "Min")
		Min(lista);
	else if (str == "Max")
		Max(lista);
	else if (str == "Remove_dup")
		Remove_dup(lista);
	else if (str == "Sum")
		Sum(lista);
	else if (str == "Pairs")
		Pairs(lista);
	else if (str == "Square")
		Square(lista);
	else if (str == "Sort")
		Sort(lista);
	else if (str == "Print")
		Print_List(lista, true);
	else if (str == "Restart")
	{
		lista = start();
	}
	else
		std::cout << "Invalid option try again" << std::endl;
}

void info_display()
{
	std::cout << "\t\tPick an option bellow\t\t" << std::endl;
	std::cout << "1. Min" << std::endl;
	std::cout << "2. Max" << std::endl;
	std::cout << "3. Remove_dup" << std::endl;
	std::cout << "4. Sum" << std::endl;
	std::cout << "5. Pairs" << std::endl;
	std::cout << "6. Square" << std::endl;
	std::cout << "7. Sort" << std::endl;
	std::cout << "8. Print" << std::endl;
	std::cout << "9. Restart" << std::endl;
	std::cout << "0. Exit" << std::endl;
}
