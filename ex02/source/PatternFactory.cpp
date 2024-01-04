#include "../header/PatternFactory.hpp"

#include <iostream>
#include <memory>

std::shared_ptr<Car> PatternFactory::createCar(CarType type)
{
	if (type == CarType::Truck)
		return std::make_shared<Truck>("Box Trucks", 1500, "Blue", "unleaded gas");
	else if (type == CarType::SportsCar)
		return std::make_shared<SportsCar>("Ferrari SP48", 6496, "Red", "Premium gas");
	else if (type == CarType::SUV)
		return std::make_shared<SUV>("Kia Niro", 700 , "Gray", "Galosine");
	else
		return nullptr;
}