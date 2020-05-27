#pragma once
#include <iostream>
#include "Vehicle.h"
class Bus: public Vehicle
{
public:
	int count_comfort() override
	{
		return 23;
	}

	int get_passengers_number() const
	{
		return passengers_number;
	}
	void set_passengers_number(const int& passengers_number)
	{
		this->passengers_number = passengers_number;
	}

	bool get_conditioner() const
	{
		return conditioner;
	}
	void set_conditioner(const bool& conditioner)
	{
		this->conditioner = conditioner;
	}

	bool get_reclining_seat() const
	{
		return reclining_seat;
	}
	void set_reclining_seat(const bool& reclining_seat)
	{
		this->reclining_seat = reclining_seat;
	}

	double get_max_luggage_pass() const
	{
		return max_luggage_pass;
	}
	void set_max_luggage_pass(const int& max_luggage_pass)
	{
		this->max_luggage_pass = max_luggage_pass;
	}
private:
	int passengers_number;
	bool conditioner;
	bool reclining_seat;
	double max_luggage_pass;
};