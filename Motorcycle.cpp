#include "Motorcycle.h"

Motorcycle::Motorcycle()
{
	weight = 200;
	max_speed = 200;
	fuel_consumption = 3;
	passengers_number = 1;
	max_luggage = 3;
	max_volume = 0.1;
	carriage = 0;
	car_class = "small";
	seat_type = "ordinary";
}

std::string Motorcycle::vehicle_name()
{
	return motorcycle;
}

int Motorcycle::count_comfort()
{
	int counter = 1;
	if (get_car_class() == "small")
	{
		counter += 0;
	}
	else if (get_car_class() == "medium")
	{
		counter += 1;
	}
	else if (get_car_class() == "large")
	{
		counter += 2;
	}
	else if (get_car_class() == "premium")
	{
		counter += 3;
	}
	if (get_seat_type() == "sports")
	{
		counter -= 1;
	}
	else if (get_seat_type() == "ordinary")
	{
		counter += 0;
	}
	else if (get_seat_type() == "comfortable")
	{
		counter += 3;
	}
	return counter;
}

void Motorcycle::print(UserInterface* ui)
{
	ui->vehicle_weight_ans();
	std::cout << get_weight() << "\n";
	ui->vehicle_max_speed_ans();
	std::cout << get_max_speed() << "\n";
	ui->vehicle_fuel_consumption_ans();
	std::cout << get_fuel_consumption() << "\n";
	ui->max_luggage_ans();
	std::cout << get_max_luggage() << "\n";
	ui->volume_ans();
	std::cout << get_max_volume() << "\n";
	ui->passengers_ans();
	std::cout << get_passengers_number() << "\n";
	ui->motorcycle_carriage_ans();
	if (get_carriage())
	{
		ui->yes();
	}
	else
	{
		ui->no();
	}
	ui->car_class_ans();
	std::cout << get_car_class() << "\n";
	ui->seat_type_ans();
	std::cout << get_seat_type() << "\n";
}

double Motorcycle::get_weight() const
{
	return weight;
}
void Motorcycle::set_weight(const double weight)
{
	this->weight = weight;
}

double Motorcycle::get_max_speed() const
{
	return max_speed;
}
void Motorcycle::set_max_speed(const double max_speed)
{
	this->max_speed = max_speed;
}

double Motorcycle::get_fuel_consumption() const
{
	return fuel_consumption;
}
void Motorcycle::set_fuel_consumption(const double fuel_consumption)
{
	this->fuel_consumption = fuel_consumption;
}

int Motorcycle::get_passengers_number() const
{
	return passengers_number;
}
void Motorcycle::set_passengers_number(const int passengers_number)
{
	this->passengers_number = passengers_number;
}

double Motorcycle::get_max_luggage() const
{
	return max_luggage;
}
void Motorcycle::set_max_luggage(const double max_luggage)
{
	this->max_luggage = max_luggage;
}

double Motorcycle::get_max_volume() const
{
	return max_volume;
}
void Motorcycle::set_max_volume(const double max_volume)
{
	this->max_volume = max_volume;
}

bool Motorcycle::get_carriage() const
{
	return carriage;
}
void Motorcycle::set_carriage(const bool carriage)
{
	this->carriage = carriage;
}

std::string Motorcycle::get_car_class() const
{
	return car_class;
}
void Motorcycle::set_car_class(const std::string& car_class)
{
	this->car_class = car_class;
}

std::string Motorcycle::get_seat_type() const
{
	return seat_type;
}
void Motorcycle::set_seat_type(const std::string& seat_type)
{
	this->seat_type = seat_type;
}

std::string Motorcycle::change_name()
{
	return motorcycle.append(" with carriage");
}