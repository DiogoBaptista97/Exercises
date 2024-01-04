#include "../header/Car.hpp"


Car::Car(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel)
	: model(model), displacement(displacement), color(color), fuel(fuel) {
}

Car::~Car() {
}


std::string Car::getModel() const
{
	return model;
}

size_t Car::getDisplacement() const
{
	return displacement;
}

std::string  Car::getColor() const
{
	return color;
}

std::string  Car::getFuel() const
{
	return fuel;
}
