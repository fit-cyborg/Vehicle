#pragma once
#include <iostream>
#include <string>
#include "UserInterface.h"
#include "Vehicle.h"

class PassengerCar: public Vehicle
{
public:
	PassengerCar();
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
	std::string get_body_type() const;
	void set_body_type(const std::string& bode_type);
	std::string get_car_class() const;
	void set_car_class(const std::string& car_segment);
	std::string get_seat_type() const;
	void set_seat_type(const std::string& seat_type);
private:
	double weight;
	double max_speed;
	double fuel_consumption;
	int passengers_number;
	double max_luggage;
	double max_volume;
	std::string body_type;
	std::string car_class;
	std::string seat_type;
	const std::string passenger_car{ "Passenger car" };
};