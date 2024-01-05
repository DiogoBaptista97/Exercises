#include "../header/header.hpp"

void Min(std::vector<int> lista)
{
	std::cout << "The minimum value is: " << *std::min_element(lista.begin(), lista.end()) << std::endl;
}

void Max(std::vector<int> lista)
{
	std::cout << "The maximum value is: " << *std::max_element(lista.begin(), lista.end()) << std::endl;
}

void Remove_dup(std::vector<int> lista) 
{
	std::sort(lista.begin(), lista.end()); //sorting the list to remove the duplicates
	lista.erase(std::unique(lista.begin(), lista.end()), lista.end()); //removing the duplicates permantly
	if (lista.size() == 10)
	{
		std::cout << "There are no duplicates" << std::endl;
		return;
	}
	std::cout << "Removing duplicates" << std::endl;
	std::cout << "Your list is now: " << std::endl;
	Print_List(lista, false);
}

void Sum(std::vector<int> lista)
{
	int soma = std::accumulate(lista.begin(), lista.end(), 0);
	std::cout << "The sum of all the numbers is: " << soma << std::endl;
}

void Pairs(std::vector<int> lista) //creating a new list with only the even numbers
{
	std::vector<int> pairs;
	std::copy_if(lista.begin(), lista.end(), std::back_inserter(pairs), [](int num) { return num % 2 == 0; });
	if (pairs.size() == 0)
	{
		std::cout << "There are no even numbers" << std::endl;
		return;
	}
	std::cout << "The even numbers are: " << std::endl;
	Print_List(pairs, false);
}

void Square(std::vector<int>& lista) //passing by reference to change the original list
{

	std::transform(lista.begin(), lista.end(), lista.begin(), [](int num)
	{//handling overflow
			long long square = static_cast<long long>(num) * num;
			if (square > INT_MAX)
				return INT_MAX;
			return static_cast<int>(square);
	 });

	std::cout << "Your list squared is: " << std::endl;
	Print_List(lista, false);

	for(size_t i = 0; i < lista.size(); i++) //checking if any number is bigger than 46340
		if (lista[i] > 46340)
		{
			std::cout << "Warning:" << std::endl;
			std::cout << "Using Square if any number is bigger than 46340 it provide with INT_MAX" << std::endl;
			break;
		}
}

void Sort(std::vector<int> lista)  //i decided to not pass by reference because i dont want to change the original list
{
	std::string str;
	std::sort(lista.begin(), lista.end());
	std::cout << "Your list sorted is: " << std::endl;
	Print_List(lista, false);
}

void Print_List(std::vector<int> lista, bool flag)
{
	if (flag == true)
		std::cout << "Your list is: " << std::endl;
	for (size_t i = 0; i < lista.size(); i++)
	{
		std::cout << lista[i] << std::endl;
	}
}
