#include "Truck.h"

void Truck::vehicle_name()
{
	std::cout << truck;
}
double Truck::get_carrying() const
{
	return carrying;
}

void Truck::set_carrying(const double& carrying)
{
	this->carrying = carrying;
}