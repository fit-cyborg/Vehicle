#include "Bus.h"

int Bus::count_comfort()
{
	return 23;
}

void Bus::vehicle_name()
{
	std::cout << bus;
}


int Bus::get_passengers_number() const
{
	return passengers_number;
}
void Bus::set_passengers_number(const int& passengers_number)
{
	this->passengers_number = passengers_number;
}

bool Bus::get_conditioner() const
{
	return conditioner;
}
void Bus::set_conditioner(const bool& conditioner)
{
	this->conditioner = conditioner;
}

bool Bus::get_reclining_seat() const
{
	return reclining_seat;
}
void Bus::set_reclining_seat(const bool& reclining_seat)
{
	this->reclining_seat = reclining_seat;
}

double Bus::get_max_luggage_pass() const
{
	return max_luggage_pass;
}
void Bus::set_max_luggage_pass(const int& max_luggage_pass)
{
	this->max_luggage_pass = max_luggage_pass;
}