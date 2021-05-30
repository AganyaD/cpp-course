#pragma once
#include <Vehicle.hpp>

class Car :
	public Vehicle
{
public:
	Car(std::string serial_number, std::string color);
	Car();
	~Car();

private:

};