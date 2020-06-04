#pragma once
#include <iostream>
class Vehicle
{
public:
	virtual int count_comfort() = 0;
	virtual void vehicle_name() = 0;
	virtual double get_weight() const;
	virtual void set_weight(double weight);
	virtual double get_max_speed() const;
	virtual void set_max_speed(double max_speed);
	virtual double get_fuel_consumption() const;
	virtual void set_fuel_consumption(double fuel_consumption);

private:
	double weight;
	double max_speed;
	double fuel_consumption;
};