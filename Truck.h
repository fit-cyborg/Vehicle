#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
class Truck: public Vehicle
{
public:
	void vehicle_name() override;
	double get_carrying() const;
	void set_carrying(const double& carrying);
private:
	double carrying;
	std::string truck{ "Truck" };
};