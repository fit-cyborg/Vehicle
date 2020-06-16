#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

class Truck: public Vehicle
{
public:
	int count_comfort() override;
	std::string vehicle_name() override;
	void print(UserInterface* ui) override;
	double get_weight() const override;
	void set_weight(const double weight) override;
	double get_max_speed() const override;
	void set_max_speed(const double max_speed) override;
	double get_fuel_consumption() const override;
	void set_fuel_consumption(const double fuel_consumption) override;
	double get_max_luggage() const override;
	void set_max_luggage(const double max_luggage) override;
	double get_max_volume() const override;
	void set_max_volume(const double volume) override;
	int get_passengers_number() const override;
	void set_passengers_number(const int passengers_number) override;
	double get_carrying() const;
	void set_carrying(const double carrying);
private:
	double weight;
	double max_speed;
	double fuel_consumption;
	int passengers_number;
	double max_luggage;
	double max_volume;
	double carrying;
	std::string truck{ "Truck" };
};