#pragma once
#include <iostream>
#include "UserInterface.h"
#include "PassengerCar.h"
#include "Motorcycle.h"
#include "Bus.h"
#include "Truck.h"

class Produce
{
public:
	PassengerCar* create_passenger_car(UserInterface* ui);
	Motorcycle* create_motorcycle(UserInterface* ui);
	Truck* create_truck(UserInterface* ui);
	Bus* create_bus(UserInterface* ui);
};