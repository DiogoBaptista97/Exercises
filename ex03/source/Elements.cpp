#include "../header/Elements.hpp"

Elements::Elements(int id, std::string name) : id(id), name(name) {	
}

std::string Elements::getName() const {
	return this->name;
}