#pragma once
#include <string>
#include "UserInterface.h"
class Vehicle
{
public:
	virtual int count_comfort() = 0;
	virtual std::string vehicle_name() = 0;
	virtual void print(UserInterface* ui) = 0;
	virtual double get_weight() const = 0;
	virtual void set_weight(double weight) = 0;
	virtual double get_max_speed() const = 0;
	virtual void set_max_speed(double max_speed) = 0;
	virtual double get_fuel_consumption() const = 0;
	virtual void set_fuel_consumption(double fuel_consumption) = 0;
	virtual double get_max_luggage() const = 0;
	virtual void set_max_luggage(const double max_luggage) = 0;
	virtual double get_max_volume() const = 0;
	virtual void set_max_volume(const double volume) = 0;
	virtual int get_passengers_number() const = 0;
	virtual void set_passengers_number(const int passengers_number) = 0;
};