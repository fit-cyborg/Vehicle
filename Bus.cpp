#include "Bus.h"

Bus::Bus()
{
	weight = 10000;
	max_speed = 100;
	fuel_consumption = 15;
	passengers_number = 20;
	max_luggage = 300;
	max_volume = 7;
	max_luggage_pass = 15;
	conditioner = 0;
	reclining_seat = 0;
	car_class = "small";
	seat_type = "ordinary";
}

int Bus::count_comfort()
{
	int counter = 1;
	if (get_conditioner())
	{
		counter += 1;
	}
	if (get_reclining_seat())
	{
		counter += 1;
	}
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
		counter += 1;
	}
	return counter;
}

std::string Bus::vehicle_name()
{
	return bus;
}

void Bus::print(UserInterface* ui)
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
	ui->max_luggage_pass_ans();
	std::cout << get_max_luggage_pass() << "\n";
	ui->conditioner_ans();
	if (get_conditioner())
	{
		ui->yes();
	}
	else
	{
		ui->no();
	}
	ui->reclining_seat_ans();
	if (get_reclining_seat())
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

double Bus::get_weight() const
{
	return weight;
}
void Bus::set_weight(const double weight)
{
	this->weight = weight;
}

double Bus::get_max_speed() const
{
	return max_speed;
}
void Bus::set_max_speed(const double max_speed)
{
	this->max_speed = max_speed;
}

double Bus::get_fuel_consumption() const
{
	return fuel_consumption;
}
void Bus::set_fuel_consumption(const double fuel_consumption)
{
	this->fuel_consumption = fuel_consumption;
}

int Bus::get_passengers_number() const
{
	return passengers_number;
}
void Bus::set_passengers_number(const int passengers_number)
{
	this->passengers_number = passengers_number;
}

double Bus::get_max_luggage() const
{
	return max_luggage;
}
void Bus::set_max_luggage(const double max_luggage)
{
	this->max_luggage = max_luggage;
}

double Bus::get_max_volume() const
{
	return max_volume;
}
void Bus::set_max_volume(const double max_volume)
{
	this->max_volume = max_volume;
}

bool Bus::get_conditioner() const
{
	return conditioner;
}
void Bus::set_conditioner(const bool conditioner)
{
	this->conditioner = conditioner;
}

bool Bus::get_reclining_seat() const
{
	return reclining_seat;
}
void Bus::set_reclining_seat(const bool reclining_seat)
{
	this->reclining_seat = reclining_seat;
}

double Bus::get_max_luggage_pass() const
{
	return max_luggage_pass;
}
void Bus::set_max_luggage_pass(const double max_luggage_pass)
{
	this->max_luggage_pass = max_luggage_pass;
}

std::string Bus::get_car_class() const
{
	return car_class;
}
void Bus::set_car_class(const std::string& car_class)
{
	this->car_class = car_class;
}

std::string Bus::get_seat_type() const
{
	return seat_type;
}
void Bus::set_seat_type(const std::string& seat_type)
{
	this->seat_type = seat_type;
}