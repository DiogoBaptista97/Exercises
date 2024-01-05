#ifndef CATEGORY_HPP
#define CATEGORY_HPP


#include "Subcategory.hpp"

class Category{

	private:
		int id;
		std::string name;
		std::vector<Subcategory> subcategories;
	public:
		Category(int id, std::string name);
		void addSubcategory(const Subcategory& Subcategory);
		std::string getName() const;
		std::vector<Subcategory> getSubcategories() const;
};

#endif // CATEGORY_HPP