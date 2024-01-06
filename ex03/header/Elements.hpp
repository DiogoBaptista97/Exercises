#ifndef ELEMENTS_HPP
#define ELEMENTS_HPP

#include <string>

class Elements{
	private:
		std::string type;
		std::string tag;
		std::string color;
		int id;
	public:
		Elements(std::string type, std::string tag, std::string color, int id);
		std::string getType() const;
		std::string getTag() const;
		std::string getColor() const;
		int getId() const;
};

#endif // ELEMENTS_HPP