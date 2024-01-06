#ifndef CATEGORY_HPP
#define CATEGORY_HPP


#include "Subcategory.hpp"
#include <memory>

class Category{

	private:
		int id;
		std::string name;
		std::vector<std::shared_ptr <Subcategory>> subcategories;
	public:
		Category(int id, std::string name);
		void addSubcategory(std::shared_ptr <Subcategory> Subcategory);
		std::string getName() const;
		std::vector<std::shared_ptr<Subcategory>> getSubcategories() const;
};

#endif // CATEGORY_HPP