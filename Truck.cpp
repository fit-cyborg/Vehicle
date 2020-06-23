#include "Truck.h"

Truck::Truck()
{
	weight = 30000;
	max_speed = 90;
	fuel_consumption = 27;
	passengers_number = 2;
	max_luggage = 0;
	max_volume = 50;
	carrying = 5000;
}

int Truck::count_comfort()
{
	return 0;
}

std::string Truck::vehicle_name()
{
	return truck;
}

void Truck::print(UserInterface* ui)
{
	ui->vehicle_weight_ans();
	std::cout << get_weight() << "\n";
	ui->vehicle_max_speed_ans();
	std::cout << get_max_speed() << "\n";
	ui->vehicle_fuel_consumption_ans();
	std::cout << get_fuel_consumption() << "\n";;
	ui->truck_carrying_ans();
	std::cout << get_carrying() << "\n";
	ui->volume_ans();
	std::cout << get_max_volume() << "\n";
	ui->passengers_ans();
	std::cout << get_passengers_number() << "\n";
}

double Truck::get_weight() const
{
	return weight;
}
void Truck::set_weight(const double weight)
{
	this->weight = weight;
}

double Truck::get_max_speed() const
{
	return max_speed;
}
void Truck::set_max_speed(const double max_speed)
{
	this->max_speed = max_speed;
}

double Truck::get_fuel_consumption() const
{
	return fuel_consumption;
}
void Truck::set_fuel_consumption(const double fuel_consumption)
{
	this->fuel_consumption = fuel_consumption;
}

int Truck::get_passengers_number() const
{
	return passengers_number;
}
void Truck::set_passengers_number(const int passengers_number)
{
	this->passengers_number = passengers_number;
}

double Truck::get_max_luggage() const
{
	return max_luggage;
}
void Truck::set_max_luggage(const double max_luggage)
{
	this->max_luggage = max_luggage;
}

double Truck::get_max_volume() const
{
	return max_volume;
}
void Truck::set_max_volume(const double max_volume)
{
	this->max_volume = max_volume;
}

double Truck::get_carrying() const
{
	return carrying;
}
void Truck::set_carrying(const double carrying)
{
	this->carrying = carrying;
}