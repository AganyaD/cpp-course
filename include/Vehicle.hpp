#pragma once
#include <string>

class Vehicle {
private:
    std::string m_serial_number;
    std::string m_type;
    std::string m_color;
    std::string Vehicle::Print_serial_number();
    std::string Vehicle::Print_type();
    std::string Vehicle::Print_color();
public:
    Vehicle(std::string serial_number, std::string type, std::string color);
    Vehicle();
    std::string PrintAll();
};
