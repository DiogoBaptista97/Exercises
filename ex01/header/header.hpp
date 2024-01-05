#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>
#include <limits.h>

# define CLEAR "\033c"


// ------funciont------
void Print_List(std::vector<int> lista, bool flag);
void Remove_dup(std::vector<int> lista);
void Pairs(std::vector<int> lista);
void Square(std::vector<int>& lista);
void Sort(std::vector<int> lista);
void Sum(std::vector<int> lista);
void Min(std::vector<int> lista);
void Max(std::vector<int> lista);

// --ifnfo display--
void info_display();

// --main auxiliar funcitons--
std::vector<int> start();
void options(std::string str, std::vector<int>& lista);
std::vector<int> start();
