#include "../header/Truck.hpp"
#include <iostream>
Truck::Truck(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel)
	: Car(model, displacement, color, fuel) {
}

Truck::~Truck() {
}

void Truck::printDetails() const {
	std::cout << "Truck: " << getModel() << ", " << getDisplacement() << ", " << getColor() << ", " << getFuel() << std::endl;
}