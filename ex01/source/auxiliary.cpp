#include "../header/header.hpp"

/* std::vector<int> random10()
{
	srand(time(0));
	
	std::cout << "Generating a list of 10 random numbers" << std::endl;
	std::vector<int> lista;
	for(int i = 0; i < 10; i++)
	{
		lista.push_back(rand() % 100);
		std::cout << lista[i] << std::endl;
	}
	return lista;
} */

std::vector<int> start()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 100);//46340 is the square root of INT_MAX, after that the numbers start to repeat 

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
		std::cout << "The minimum value is: " << *std::min_element(lista.begin(), lista.end()) << std::endl;
	else if (str == "Max")
		std::cout << "The maximum value is: " << *std::max_element(lista.begin(), lista.end()) << std::endl;
	else if (str == "Remove_dup")
		Remove_dup(lista);
	else if (str == "Sum")
	{
		int soma = std::accumulate(lista.begin(), lista.end(), 0);
		std::cout << "The sum of all the numbers is: " << soma << std::endl;
	}
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
