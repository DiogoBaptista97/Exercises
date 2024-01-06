#include "../header/Elements.hpp"

Elements::Elements(std::string type, std::string tag, std::string color, int id){
	this->type = type;
	this->tag = tag;
	this->color = color;
	this->id = id;
}

std::string Elements::getType() const{
	return this->type;
}

std::string Elements::getTag() const{
	return this->tag;
}

std::string Elements::getColor() const{
	return this->color;
}

int Elements::getId() const{
	return this->id;
}
