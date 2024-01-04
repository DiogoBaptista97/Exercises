#include "../header/Car.hpp"
#include "../header/SUV.hpp"
#include "../header/SportsCar.hpp"
#include "../header/Truck.hpp"
#include "../header/PatternFactory.hpp"
#include <iostream>
#include <memory>

int main(){
	std::shared_ptr<Car> car1 = PatternFactory::createCar(CarType::Truck);
	std::shared_ptr<Car> car2 = PatternFactory::createCar(CarType::SportsCar);
	std::shared_ptr<Car> car3 = PatternFactory::createCar(CarType::SUV);
	car1->printDetails();
	car2->printDetails();
	car3->printDetails();
}