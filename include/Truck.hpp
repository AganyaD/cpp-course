#pragma once
#include <Vehicle.hpp>

//public enum License { B_License = 0, C_License = 1 };
static const char *License_str[] = { "B_License", "C_License" };

class Truck
	:public Vehicle
{
public:
	enum License { B_License = 0, C_License = 1 };
	License m_license;
	Truck(std::string serial_number, std::string color,License license);
	Truck();
	~Truck();
	std::string PrintAll();
	std::string Print_License();

private:

};