#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
class Motorcycle: public Vehicle
{
public:
	int count_comfort() override;
	void vehicle_name() override;
	bool get_carriage();
	void set_carriage(const bool& carriage);
private:
	bool carriage;
	std::string motorcycle{ "Motorcycle" };
};