#include "PassengerCar.h"

int PassengerCar::count_comfort()
{
	return 23;
}

void PassengerCar::vehicle_name()
{
	std::cout << passenger_car;
}

double PassengerCar::get_max_luggage() const
{
	return max_luggage;
}
void PassengerCar::set_max_luggage(const double& max_luggage)
{
	this->max_luggage = max_luggage;
}

std::string PassengerCar::get_body_type() const
{
	return body_type;
}
void PassengerCar::set_body_type(const std::string& bode_type)
{
	this->body_type = body_type;
}

std::string PassengerCar::get_car_segment() const
{
	return car_segment;
}
void PassengerCar::set_car_segment(const std::string& car_segment)
{
	this->car_segment = car_segment;
}

int PassengerCar::get_passengers_number() const
{
	return passengers_number;
}
void PassengerCar::set_passengers_number(const int& passengers_number)
{
	this->passengers_number = passengers_number;
}

std::string PassengerCar::get_seat_type() const
{
	return seat_type;
}
void PassengerCar::set_seat_type(const std::string& seat_type)
{
	this->seat_type = seat_type;
}