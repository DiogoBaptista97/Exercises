#include <iostream>
#include <fstream>
#include <vector>
#include <string>
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

Elements parseElement(const nlohmann::json& elem)
{
	if (!elem.contains("id") || !elem.contains("name"))
		throw std::runtime_error("Missing 'id' or 'name' in element.");
	return Elements(elem["id"], elem["name"]);
}

Subcategory parseSubcategory(const nlohmann::json& subcat)
{
	if (!subcat.contains("id") || !subcat.contains("name"))
		throw std::runtime_error("Missing 'id' or 'name' in subcategory.");
	Subcategory subcategory(subcat["id"], subcat["name"]);
	if (subcat.contains("elements") && subcat["elements"].is_array())
	{
		for (const auto& elem : subcat["elements"])
			subcategory.addElement(parseElement(elem));
	}
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
			category.addSubcategory(parseSubcategory(subcat));
	}
	return category;
}

void parse_json(const nlohmann::json& info, std::vector<Category>& categories)
{
	if (!info.contains("categories") || !info["categories"].is_array())
		throw std::runtime_error("Invalid JSON file, does not contain categories or in not in an array.");
	for (const auto& cat : info["categories"])
		categories.push_back(parseCategory(cat));

}


