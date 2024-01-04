#ifndef SUV_HPP
#define SUV_HPP
#include "Car.hpp"
class SUV : public Car
{
	public:
		SUV(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel);
		~SUV();
		void printDetails() const override;
};
#endif // SUV_HPP