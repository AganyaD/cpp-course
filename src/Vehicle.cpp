#include <Vehicle.hpp>


Vehicle::Vehicle(std::string serial_number, std::string type, std::string color) : 
m_serial_number(serial_number), m_type(type), m_color(color)
{
	
}

Vehicle::Vehicle() : 
	m_serial_number(""), m_type(""), m_color("")
{

}

std::string Vehicle::Print_serial_number()
{
	return "serial_number = " + m_serial_number;
}

std::string Vehicle::Print_type()
{
	return "type = " + m_type;
}

std::string Vehicle::Print_color()
{
	return "color = " + m_color;
}

std::string Vehicle::PrintAll()
{
	return  Vehicle::Print_serial_number() + " " + Vehicle::Print_type() + " " + Vehicle::Print_color();
}