#include <Car.hpp>
#include <string>
#include <iostream>
using std::string;

Car::Car(std::string serial_number, std::string color)
	:Vehicle(serial_number,"Car",color)
{
	std::cout<< "Constructor Car"<<std::endl;
}

Car::Car()
	:Vehicle("","Car","")
{
	std::cout<< "Constructor Car"<<std::endl;
}

Car::~Car()
{
	std::cout<< "Distructor Car"<<std::endl;
}