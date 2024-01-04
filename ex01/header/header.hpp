#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>
#include <limits.h>

# define CLEAR "\033c"

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
// ------funciont------
void Print_List(std::vector<int> lista, bool flag);
void Remove_dup(std::vector<int> lista);
void Pairs(std::vector<int> lista);
void Square(std::vector<int>& lista);
void Sort(std::vector<int>& lista);

// --ifnfo display--
void info_display();

// --main auxiliar funcitons--
std::vector<int> start();
void options(std::string str, std::vector<int>& lista);



