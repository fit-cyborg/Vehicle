#include "PassengerCar.h"

PassengerCar::PassengerCar()
{
	weight = 1500;
	max_speed = 180;
	fuel_consumption = 5;
	passengers_number = 4;
	max_luggage = 50;
	max_volume = 0.5;
	body_type = "sedan";
	car_class = "medium";
	seat_type = "ordinary";
}

int PassengerCar::count_comfort()
{
	int counter = 1;
	if (get_body_type() == "wagon")
	{
		counter += 0;
	}
	else if (get_body_type() == "sedan")
	{
		counter += 1;
	}
	else if (get_body_type() == "coupe")
	{
		counter += 1;
	}
	else if (get_body_type() == "crossover")
	{
		counter += 2;
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

void PassengerCar::print(UserInterface* ui)
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
	ui->body_type_ans();
	std::cout << get_body_type() << "\n";
	ui->car_class_ans();
	std::cout << get_car_class() << "\n";
	ui->seat_type_ans();
	std::cout << get_seat_type() << "\n";
}

std::string PassengerCar::vehicle_name()
{
	return passenger_car;
}

double PassengerCar::get_weight() const
{
	return weight;
}
void PassengerCar::set_weight(double weight)
{
	this->weight = weight;
}

double PassengerCar::get_max_speed() const
{
	return max_speed;
}
void PassengerCar::set_max_speed(const double max_speed)
{
	this->max_speed = max_speed;
}

double PassengerCar::get_fuel_consumption() const
{
	return fuel_consumption;
}
void PassengerCar::set_fuel_consumption(const double fuel_consumption)
{
	this->fuel_consumption = fuel_consumption;
}

double PassengerCar::get_max_luggage() const
{
	return max_luggage;
}
void PassengerCar::set_max_luggage(const double max_luggage)
{
	this->max_luggage = max_luggage;
}

double PassengerCar::get_max_volume() const
{
	return max_volume;
}
void PassengerCar::set_max_volume(const double max_volume)
{
	this->max_volume = max_volume;
}

std::string PassengerCar::get_body_type() const
{
	return body_type;
}
void PassengerCar::set_body_type(const std::string& body_type)
{
	this->body_type = body_type;
}

std::string PassengerCar::get_car_class() const
{
	return car_class;
}
void PassengerCar::set_car_class(const std::string& car_class)
{
	this->car_class = car_class;
}

int PassengerCar::get_passengers_number() const
{
	return passengers_number;
}
void PassengerCar::set_passengers_number(const int passengers_number)
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