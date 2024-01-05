#include "../header/Category.hpp"

Category::Category(int id, std::string name) : id(id), name(name) {
}

void Category::addSubcategory(const Subcategory& subcategory) {
	this->subcategories.push_back(subcategory);
}

std::string Category::getName() const {
	return this->name;
}

std::vector<Subcategory> Category::getSubcategories() const {
	return this->subcategories;
}