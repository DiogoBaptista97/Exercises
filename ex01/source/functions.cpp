#include "../header/header.hpp"

void Print_List(std::vector<int> lista, bool flag)
{
	if (flag == true)
		std::cout << "Your list is: " << std::endl;
	for (size_t i = 0; i < lista.size(); i++)
	{
		std::cout << lista[i] << std::endl;
	}
}

void Remove_dup(std::vector<int> lista)
{
	std::sort(lista.begin(), lista.end());
	lista.erase(std::unique(lista.begin(), lista.end()), lista.end());
	if (lista.size() == 10)
	{
		std::cout << "There are no duplicates" << std::endl;
		return;
	}
	std::cout << "Removing duplicates" << std::endl;
	std::cout << "Your list is now: " << std::endl;
	Print_List(lista, false);
}

void Pairs(std::vector<int> lista)
{
	std::vector<int> pairs;
	std::copy_if(lista.begin(), lista.end(), std::back_inserter(pairs), [](int num) { return num % 2 == 0; });
	std::cout << "The even numbers are: " << std::endl;
	Print_List(pairs, false);
}

void Square(std::vector<int>& lista)
{
	std::transform(lista.begin(), lista.end(), lista.begin(), [](int num) { return num * num; });
	std::cout << "Your list squared is: " << std::endl;
	Print_List(lista, false);
	for(size_t i = 0; i < lista.size(); i++)
		if (lista[i] > 46340)
		{
			std::cout << "Warning:" << std::endl;
			std::cout << "Using Square if any number is bigger than 46340 it will produce irregular behaviour" << std::endl;
			break;
		}
}

void Sort(std::vector<int>& lista)
{
	std::string str;
	std::sort(lista.begin(), lista.end());
	std::cout << "Your list sorted is: " << std::endl;
	Print_List(lista, false);
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