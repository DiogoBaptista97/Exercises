#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>
#include "../header/json.hpp"
#include "../header/Category.hpp"
#include "../header/Subcategory.hpp"
#include "../header/Elements.hpp"
#include "../header/Utils.hpp"

nlohmann::json read_json()
{
	nlohmann::json info;
	std::ifstream file("files/sidebar_default.json");
	if (!file.is_open())
		throw std::runtime_error("Unable to open JSON file.");
	file >> info;
	file.close();
	return info;
}


std::shared_ptr<Subcategory> parseSubcategory(const nlohmann::json& subcat)
{
	if (!subcat.contains("id") || !subcat.contains("name"))
		throw std::runtime_error("Missing 'id' or 'name' in subcategory.");
	auto subcategory = std::make_shared<Subcategory> (subcat["id"], subcat["name"]);
	return subcategory;
}


Category parseCategory(const nlohmann::json& cat)
{
	if(!cat.contains("id") || !cat.contains("name"))
		throw std::runtime_error("Missing 'id' or 'name' in category.");
	Category category(cat["id"], cat["name"]);
	if (cat.contains("subcategories") && cat["subcategories"].is_array())
	{
		for (const auto& subcat : cat["subcategories"])
		{
			auto subcategory = parseSubcategory(subcat);
			category.addSubcategory(subcategory);
		}
	}
	return category;
}



void parse_json(const nlohmann::json& info, std::vector<Category>& categories)
{
	if (!info.contains("categories") || !info["categories"].is_array())
		throw std::runtime_error("Invalid JSON file, does not contain categories or in not in an array.");
	for (const auto& cat : info["categories"])
		categories.push_back(parseCategory(cat));
	std::cout << "Parsing config sidebar..." << std::endl;
	parseConfigsSideBar(info["configsSideBar"], categories);
}


