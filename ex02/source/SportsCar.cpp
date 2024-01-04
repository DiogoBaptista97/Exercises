#include "../header/SportsCar.hpp"
#include <iostream>

SportsCar::SportsCar(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel)
	: Car(model, displacement, color, fuel) {
}

SportsCar::~SportsCar() {
}

void SportsCar::printDetails() const {
	std::cout << "SportsCar: " << getModel() << ", " << getDisplacement() << ", " << getColor() << ", " << getFuel() << std::endl;
}