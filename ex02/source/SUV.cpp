#include "../header/SUV.hpp"
#include <iostream>

SUV::SUV(const std::string& model, size_t displacement, const std::string& color, const std::string& fuel)
	: Car(model, displacement, color, fuel) {
}

SUV::~SUV() {
}

void SUV::printDetails() const {
	std::cout << "SUV: " << getModel() << ", " << getDisplacement() << ", " << getColor() << ", " << getFuel() << std::endl;
}