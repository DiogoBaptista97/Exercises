#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "Car.hpp"

class Truck : public Car
{
	public:
		Truck(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel);

		~Truck();
		void printDetails() const override;
};

#endif // TRUCK_HPP