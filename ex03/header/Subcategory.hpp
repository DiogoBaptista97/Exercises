#ifndef SUBCATEGORY_HPP
#define SUBCATEGORY_HPP

#include <string>
#include <vector>
#include "Elements.hpp"

class Subcategory{
	private:
		int id;
		std::string name;
		std::vector<Elements> elements;
	public:
		Subcategory(int id, std::string name);
		void addElement(const Elements& element);
		std::string getName() const;
		std::vector<Elements> getElements() const;
};

#endif // SUBCATEGORY_HPP