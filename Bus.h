#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
class Bus: public Vehicle
{
public:
	int count_comfort() override;
	void vehicle_name() override;
	int get_passengers_number() const;
	void set_passengers_number(const int& passengers_number);
	bool get_conditioner() const;
	void set_conditioner(const bool& conditioner);
	bool get_reclining_seat() const;
	void set_reclining_seat(const bool& reclining_seat);
	double get_max_luggage_pass() const;
	void set_max_luggage_pass(const int& max_luggage_pass);
private:
	int passengers_number;
	bool conditioner;
	bool reclining_seat;
	double max_luggage_pass;
	const std::string bus{ "Bus" };
};