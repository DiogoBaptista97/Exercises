#ifndef PATTERNFACTORY_HPP
#define PATTERNFACTORY_HPP

#include <memory>
#include "Car.hpp"
#include "Truck.hpp"
#include "SportsCar.hpp"
#include "SUV.hpp"

enum class CarType { Truck, SportsCar, SUV};

class PatternFactory{
	public:
		static std::shared_ptr<Car> createCar(CarType type);
};

#endif // PATTERNFACTORY_HPP