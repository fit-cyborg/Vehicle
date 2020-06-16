#pragma once
#include <iostream>
#include "PassengerCar.h"
#include "Motorcycle.h"
#include "Bus.h"
#include "Truck.h"
#include "UserInterface.h"

class Selection
{
public:
	Vehicle* select(UserInterface* ui);
};