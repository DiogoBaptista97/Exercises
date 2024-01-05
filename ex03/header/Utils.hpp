#ifndef UTILS_HPP
#define UTILS_HPP

#include "json.hpp"
#include "Elements.hpp"
#include "Subcategory.hpp"
#include "Category.hpp"

nlohmann::json read_json();

Category parseCategory(const nlohmann::json& cat);
Subcategory parseSubcategory(const nlohmann::json& subcat);
Elements parseElement(const nlohmann::json& elem);
void parse_json(const nlohmann::json& info, std::vector<Category>& categories);


#endif // UTILS_HPP