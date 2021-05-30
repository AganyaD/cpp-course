
#include <Application.hpp>
#include <Vehicle.hpp>
#include <string>
#include <iostream>
#include <Car.hpp>
#include <Truck.hpp>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printMsg(string text)
{
	cout<< text << endl;
}

void CreatNewVehicle()
{
	string serialNumber;
	string type;
	string color;
	Truck::License license = Truck::B_License;
	//creat new vehicle
	printMsg("please enter the vehicle type");
	cin >> type;

	if (type == "car")
	{
		//creat new Car
		printMsg("please enter the Car's serial number:");
		cin >> serialNumber;
		printMsg("please enter the Car's color:");
		cin >> color;
		Car car = Car(serialNumber, color);
		printMsg(car.PrintAll());
	}
	else if (type == "truck")
	{
		//creat new Truck
		printMsg("please enter the Truck's serial number:");
		cin >> serialNumber;
		printMsg("please enter the Truck's color:");
		cin >> color;
		printMsg("please enter the Truck's License:");
		printMsg("0 = B_License");
		printMsg("1 = C_License");
		int l;
		cin >> l;
		license = static_cast<Truck::License>(l);

		Truck truck = Truck(serialNumber, color,license);
		printMsg(truck.PrintAll());
	}
	else
	{
		printMsg("please enter the vehicle's serial number:");
		cin >> serialNumber;
		printMsg("please enter the vehicle's color:");
		cin >> color;
		Vehicle vehicle = Vehicle(serialNumber, type, color);
		printMsg(vehicle.PrintAll());
	}

}

void Application::Run()
{
	bool run = true;
	

	while (run)
	{

		int input_number;

		printMsg("---------------------------");
		printMsg("---------------------------");
		printMsg("$ Please select an option:");
		printMsg("1 - Print application data");
		printMsg("2 - Create a new vehicle");
		printMsg("Else for Exit");

		cin >> input_number;
		printMsg("Selected option = " + std::to_string(input_number) );

		switch (input_number)
		{
		case 1:
			printMsg("SE vehicles fleet managment app, version 1.0.0");
			break;
		case 2:
			CreatNewVehicle();
			break;
		default:
			//Exit
			run = false;
			break;
		}

	}



}

