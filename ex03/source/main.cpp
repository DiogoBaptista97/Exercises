#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "../header/json.hpp" // includes the nlohmann::json header, that was manually installed
#include "../header/Category.hpp"
#include "../header/Subcategory.hpp"
#include "../header/Elements.hpp"
#include "../header/Utils.hpp"


//display of the information in the terminal
void display_categories(const std::vector<Category>& categories)
{
	for (const auto& category : categories) {
		std::cout << "Category: " << category.getName() << std::endl;
		for (const auto& subcategory : category.getSubcategories()) {
			std::cout << "\tSubcategory: " << subcategory->getName() << std::endl;
			for (const auto& element : subcategory->getElements()) {
				std::cout << "\t\tElement: " << std::endl;
				std::cout << "\t\t\tType: " << element.getType() << std::endl;
				std::cout << "\t\t\tTag: " << element.getTag() << std::endl;
				std::cout << "\t\t\tId: " << element.getId() << std::endl;
				std::cout << "\t\t\tColor: " << element.getColor() << std::endl;

			}
		}
	}
}

int main()
{
	try{
		nlohmann::json info;
		std::vector<Category> categories;

		info = read_json();
		parse_json(info, categories);
		std::cout << "Displaying categories..." << std::endl;
		display_categories(categories);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}