#include "../header/Elements.hpp"
#include <iostream>

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

void Elements::display() const
{

	std::cout << "Element: " << std::endl;
	std::cout << "Type: " << this->type << std::endl;
	std::cout << "Tag: " << this->tag << std::endl;
	std::cout << "Color: " << this->color << std::endl;
	std::cout << "Id: " << this->id << std::endl;
}
