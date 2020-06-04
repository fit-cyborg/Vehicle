#include "Vehicle.h"

double Vehicle::get_weight() const
{
	return weight;
}
void Vehicle::set_weight(double weight)
{
	this->weight = weight;
}

double Vehicle::get_max_speed() const
{
	return max_speed;
}
void Vehicle::set_max_speed(double max_speed)
{
	this->max_speed = max_speed;
}

double Vehicle::get_fuel_consumption() const
{
	return fuel_consumption;
}
void Vehicle::set_fuel_consumption(double fuel_consumption)
{
	this->fuel_consumption = fuel_consumption;
}