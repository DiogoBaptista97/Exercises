#include "../header/Subcategory.hpp"

Subcategory::Subcategory(int id, std::string name) : id(id), name(name) {
}

void Subcategory::addElement(const Elements& element) {
	this->elements.push_back(element);
}

std::string Subcategory::getName() const {
	return this->name;
}

std::vector<Elements> Subcategory::getElements() const {
	return this->elements;
}