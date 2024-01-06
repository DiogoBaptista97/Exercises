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


bool validateElemnt(const nlohmann::json& elem)
{
	if (elem.find("type") != elem.end() && elem.find("tag") != elem.end() &&  elem.find("color") != elem.end() &&  elem.find("subcategory") != elem.end())
		return true;
	return false;
}

Elements creatElement(const nlohmann::json& elem)
{
	std::string type = elem["type"];
	std::string tag = elem["tag"];
	std::string color = elem["color"];
	int subcategoryId = elem["subcategory"];
	return Elements(type, tag, color, subcategoryId);
}

Subcategory* findSubcategory(std::vector<Category>& categories, int subcategoryId)
{
	for (auto& category : categories)
	{
		for (auto& subcategory : category.getSubcategories())
		{
			if (subcategory->getId() == subcategoryId)
				return subcategory.get();
		}
	}
	return nullptr;
}

void parseConfigsSideBar(const nlohmann::json& config, std::vector<Category>& categories)
{
	for (const auto& elem : config)
	{
		if (!validateElemnt(elem)) 
			throw std::runtime_error("Invalid JSON file, does not contain all the required fields.");
		else
		{
			Elements newElement = creatElement(elem);
			// Find the subcategory and add the element to it
			Subcategory* subcategory = findSubcategory(categories, newElement.getId());
			if (subcategory)
				subcategory->addElement(newElement);
		}
	}
}