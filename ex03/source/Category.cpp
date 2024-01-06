#include "../header/Category.hpp"

Category::Category(int id, std::string name) : id(id), name(name) {
}

void Category::addSubcategory(std::shared_ptr<Subcategory> subcategory) {
	this->subcategories.push_back(subcategory);
}

std::string Category::getName() const {
	return this->name;
}

std::vector<std::shared_ptr<Subcategory>> Category::getSubcategories() const {
	return this->subcategories;
}