#include <Truck.hpp>
#include <string>
#include <iostream>

Truck::Truck(std::string serial_number, std::string color, License license)
	:Vehicle(serial_number,"Truck",color),
	m_license(license)
{
	std::cout<< "Constructor Truck"<<std::endl;
}
Truck::Truck()
	:Vehicle("","Truck",""),
	m_license(B_License)
{
	std::cout<< "Constructor Truck"<<std::endl;
}

Truck::~Truck()
{
	std::cout<< "Distructor Truck"<<std::endl;
}

static const char *enum_str[] =
{ "Banana Pie", "Coconut Tart", "Mango Cookie", "Carambola Crumble" };

std::string getStringForEnum( int enum_val )
{
	std::string tmp(License_str[enum_val]);
	return tmp;
}

std::string Truck::Print_License()
{
	return "License = " + getStringForEnum(m_license);
}

std::string Truck::PrintAll()
{
	return  Vehicle::PrintAll() + " " + Print_License();
}