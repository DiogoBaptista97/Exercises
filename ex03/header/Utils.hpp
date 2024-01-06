#ifndef UTILS_HPP
#define UTILS_HPP

#include "json.hpp"
#include "Elements.hpp"
#include "Subcategory.hpp"
#include "Category.hpp"

nlohmann::json read_json();

Category parseCategory(const nlohmann::json& cat);
std::shared_ptr<Subcategory> parseSubcategory(const nlohmann::json& subcat);
void parse_json(const nlohmann::json& info, std::vector<Category>& categories);
void parseConfigsSideBar(const nlohmann::json& config, std::vector<Category>& categories);
bool validateElemnt(const nlohmann::json& elem);
Elements creatElement(const nlohmann::json& elem);
Subcategory* findSubcategory(std::vector<Category>& categories, int subcategoryId);
void parseConfigsSideBar(const nlohmann::json& config, std::vector<Category>& categories);


#endif // UTILS_HPP