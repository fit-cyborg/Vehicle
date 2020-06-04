#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
class PassengerCar: public Vehicle
{
public:
	PassengerCar();
	int count_comfort() override;
	void vehicle_name() override;
	double get_max_luggage() const;
	void set_max_luggage(const double& max_luggage);
	std::string get_body_type() const;
	void set_body_type(const std::string& bode_type);
	std::string get_car_segment() const;
	void set_car_segment(const std::string& car_segment);
	int get_passengers_number() const;
	void set_passengers_number(const int& passengers_number);
	std::string get_seat_type() const;
	void set_seat_type(const std::string& seat_type);
private:
	double max_luggage;
	std::string body_type;
	std::string car_segment;
	int passengers_number;
	std::string seat_type;
	const std::string passenger_car{ "Passenger car" };
};