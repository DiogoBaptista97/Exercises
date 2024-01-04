#ifndef SPORTSCAR_HPP
#define SPORTSCAR_HPP

#include "Car.hpp"

class SportsCar : public Car
{
	public:
		SportsCar(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel);
		~SportsCar();
		void printDetails() const override;
};
#endif // SPORTSCAR_HPP