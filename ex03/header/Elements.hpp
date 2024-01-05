#ifndef ELEMENTS_HPP
#define ELEMENTS_HPP

#include <string>

class Elements{
	private:
		int id;
		std::string name;
	public:
		Elements(int id, std::string name);
		std::string getName() const;
};

#endif // ELEMENTS_HPP