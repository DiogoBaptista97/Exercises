#ifndef CAR_HPP
#define CAR_HPP
#include <string>

class Car{
	protected:
		std::string model;
		size_t displacement;
		std::string color;
		std::string fuel;

	public:
		Car(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel);
		virtual ~Car();

		virtual void printDetails() const = 0;
		std::string getModel() const;
		size_t getDisplacement() const;
		std::string getColor() const;
		std::string  getFuel() const;
};

#endif // CAR_HPP