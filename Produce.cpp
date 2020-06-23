#include "Produce.h"

PassengerCar* Produce::create_passenger_car(UserInterface* ui)
{
	PassengerCar* car = new PassengerCar;
	ui->passenger_car_alert();
	double weight;
	while (true)
	{
		ui->vehicle_weight_req();
		std::cin >> weight;
		if (ui->check_symbols() || weight < 0 || weight > 2500)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			car->set_weight(weight);
			break;
		}

	}
	double max_speed;
	while (true)
	{
		ui->vehicle_max_speed_req();
		std::cin >> max_speed;
		if (ui->check_symbols() || max_speed < 0 || max_speed > 200)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			car->set_max_speed(max_speed);
			break;
		}
	}
	double fuel_consumption;
	while (true)
	{
		ui->vehicle_fuel_consumption_req();
		std::cin >> fuel_consumption;
		if (ui->check_symbols() || fuel_consumption < 0 || fuel_consumption > 6)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			car->set_fuel_consumption(fuel_consumption);
			break;
		}
	}
	int passengers;
	while (true)
	{
		ui->passengers_req();
		std::cin >> passengers;
		if (ui->check_symbols() || passengers < 0 || passengers > 4)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			car->set_passengers_number(passengers);
			break;
		}
	}
	double max_luggage;
	while (true)
	{
		ui->max_luggage_req();
		std::cin >> max_luggage;
		if (ui->check_symbols() || max_luggage < 0 || max_luggage > 120)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			car->set_max_luggage(max_luggage);
			break;
		}
	}
	double max_volume;
	while (true)
	{
		ui->volume_req();
		std::cin >> max_volume;
		if (ui->check_symbols() || max_volume < 0 || max_volume > 1)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			car->set_max_volume(max_volume);
			break;
		}
	}
	std::string body_type;
	while (true)
	{
		ui->body_type_req();
		std::cin >> body_type;
		if (body_type == "sedan" || body_type == "wagon" || body_type == "coupe" || body_type == "crossover")
		{
			car->set_body_type(body_type);
			break;
		}
		else
		{
			ui->problem_value();
			continue;
		}
	}
	std::string car_class;
	while (true)
	{
		ui->car_class_req();
		std::cin >> car_class;
		if (car_class == "small" || car_class == "medium" || car_class == "large" || car_class == "premium")
		{
			car->set_car_class(car_class);
			break;
		}
		else
		{
			ui->problem_value();
			continue;
		}
	}
	std::string seat_type;
	while (true)
	{
		ui->seat_type_req();
		std::cin >> seat_type;
		if (seat_type == "ordinary" || seat_type == "sports" || seat_type == "comfortable")
		{
			car->set_seat_type(seat_type);
			break;
		}
		else
		{
			ui->problem_value();
			continue;
		}
	}
	return car;
}

Motorcycle* Produce::create_motorcycle(UserInterface* ui)
{
	Motorcycle* mot = new Motorcycle;
	ui->motorcycle_alert();
	double weight;
	while (true)
	{
		ui->vehicle_weight_req();
		std::cin >> weight;
		if (ui->check_symbols() || weight < 0 || weight > 300)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			mot->set_weight(weight);
			break;
		}

	}
	double max_speed;
	while (true)
	{
		ui->vehicle_max_speed_req();
		std::cin >> max_speed;
		if (ui->check_symbols() || max_speed < 0 || max_speed > 250)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			mot->set_max_speed(max_speed);
			break;
		}
	}
	double fuel_consumption;
	while (true)
	{
		ui->vehicle_fuel_consumption_req();
		std::cin >> fuel_consumption;
		if (ui->check_symbols() || fuel_consumption < 0 || fuel_consumption > 5)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			mot->set_fuel_consumption(fuel_consumption);
			break;
		}
	}
	int passengers;
	while (true)
	{
		ui->passengers_req();
		std::cin >> passengers;
		if (ui->check_symbols() || passengers < 0 || passengers > 2)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			mot->set_passengers_number(passengers);
			break;
		}
	}
	double max_luggage;
	while (true)
	{
		ui->max_luggage_req();
		std::cin >> max_luggage;
		if (ui->check_symbols() || max_luggage < 0 || max_luggage > 10)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			mot->set_max_luggage(max_luggage);
			break;
		}
	}
	double max_volume;
	while (true)
	{
		ui->volume_req();
		std::cin >> max_volume;
		if (ui->check_symbols() || max_volume < 0 || max_volume > 0.3)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			mot->set_max_volume(max_volume);
			break;
		}
	}
	bool carriage;
	while (true)
	{
		ui->motorcycle_carriage_req();
		std::cin >> carriage;
		if (ui->check_symbols() || carriage != 0 && carriage != 1)
		{
			ui->problem_operation();
			continue;
		}
		else
		{
			mot->set_carriage(carriage);
			break;
		}
	}
	std::string car_class;
	while (true)
	{
		ui->car_class_req();
		std::cin >> car_class;
		if (car_class == "small" || car_class == "medium" || car_class == "large" || car_class == "premium")
		{
			mot->set_car_class(car_class);
			break;
		}
		else
		{
			ui->problem_value();
			continue;
		}
	}
	std::string seat_type;
	while (true)
	{
		ui->seat_type_req();
		std::cin >> seat_type;
		if (seat_type == "ordinary" || seat_type == "sports" || seat_type == "comfortable")
		{
			mot->set_seat_type(seat_type);
			break;
		}
		else
		{
			ui->problem_value();
			continue;
		}
	}
	return mot;
}

Truck* Produce::create_truck(UserInterface* ui)
{
	Truck* tr = new Truck;
	ui->truck_alert();
	double weight;
	while (true)
	{
		ui->vehicle_weight_req();
		std::cin >> weight;
		if (ui->check_symbols() || weight < 0 || weight > 40000)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			tr->set_weight(weight);
			break;
		}

	}
	double max_speed;
	while (true)
	{
		ui->vehicle_max_speed_req();
		std::cin >> max_speed;
		if (ui->check_symbols() || max_speed < 0 || max_speed > 110)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			tr->set_max_speed(max_speed);
			break;
		}
	}
	double fuel_consumption;
	while (true)
	{
		ui->vehicle_fuel_consumption_req();
		std::cin >> fuel_consumption;
		if (ui->check_symbols() || fuel_consumption < 0 || fuel_consumption > 35)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			tr->set_fuel_consumption(fuel_consumption);
			break;
		}
	}
	int passengers;
	while (true)
	{
		ui->passengers_req();
		std::cin >> passengers;
		if (ui->check_symbols() || passengers < 0 || passengers > 2)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			tr->set_passengers_number(passengers);
			break;
		}
	}
	double carrying;
	while (true)
	{ 
		ui->truck_carrying_req();
		std::cin >> carrying;
		if (ui->check_symbols() || carrying < 0 || carrying > 10000)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			tr->set_carrying(carrying);
			break;
		}
	}
	double max_volume;
	while (true)
	{
		ui->volume_req();
		std::cin >> max_volume;
		if (ui->check_symbols() || max_volume < 0 || max_volume > 90)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			tr->set_max_volume(max_volume);
			break;
		}
	}
	return tr;
}

Bus* Produce::create_bus(UserInterface* ui)
{
	Bus* bus = new Bus;
	ui->bus_alert();
	double weight;
	while (true)
	{
		ui->vehicle_weight_req();
		std::cin >> weight;
		if (ui->check_symbols() || weight < 0 || weight > 15000)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_weight(weight);
			break;
		}

	}
	double max_speed;
	while (true)
	{
		ui->vehicle_max_speed_req();
		std::cin >> max_speed;
		if (ui->check_symbols() || max_speed < 0 || max_speed > 120)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_max_speed(max_speed);
			break;
		}
	}
	double fuel_consumption;
	while (true)
	{
		ui->vehicle_fuel_consumption_req();
		std::cin >> fuel_consumption;
		if (ui->check_symbols() || fuel_consumption < 0 || fuel_consumption > 18)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_fuel_consumption(fuel_consumption);
			break;
		}
	}
	int passengers;
	while (true)
	{
		ui->passengers_req();
		std::cin >> passengers;
		if (ui->check_symbols() || passengers < 0 || passengers > 25)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_passengers_number(passengers);
			break;
		}
	}
	double luggage_pass;
	while (true)
	{
		ui->max_luggage_pass_req();
		std::cin >> luggage_pass;
		if (ui->check_symbols() || luggage_pass < 0 || luggage_pass > 20)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_max_luggage_pass(luggage_pass);
			break;
		}
	}
	double max_luggage;
	while (true)
	{
		ui->max_luggage_req();
		std::cin >> max_luggage;
		if (ui->check_symbols() || max_luggage < 0 || max_luggage > 500 || luggage_pass*passengers > max_luggage)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_max_luggage(max_luggage);
			break;
		}
	}
	double max_volume;
	while (true)
	{
		ui->volume_req();
		std::cin >> max_volume;
		if (ui->check_symbols() || max_volume < 0 || max_volume > 10)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_max_volume(max_volume);
			break;
		}
	}
	bool conditioner;
	while (true)
	{
		ui->conditioner_req();
		std::cin >> conditioner;
		if (ui->check_symbols() || conditioner != 0 && conditioner != 1)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_conditioner(conditioner);
			break;
		}
	}
	bool reclining_seat;
	while (true)
	{
		ui->reclining_seat_req();
		std::cin >> reclining_seat;
		if (ui->check_symbols() || reclining_seat != 0 && reclining_seat != 1)
		{
			ui->problem_value();
			continue;
		}
		else
		{
			bus->set_reclining_seat(reclining_seat);
			break;
		}
	}
	std::string car_class;
	while (true)
	{
		ui->car_class_req();
		std::cin >> car_class;
		if (car_class == "small" || car_class == "medium" || car_class == "large" || car_class == "premium")
		{
			bus->set_car_class(car_class);
			break;
		}
		else
		{
			ui->problem_value();
			continue;
		}
	}
	std::string seat_type;
	while (true)
	{
		ui->seat_type_req();
		std::cin >> seat_type;
		if (seat_type == "ordinary" || seat_type == "sports" || seat_type == "comfortable")
		{
			bus->set_seat_type(seat_type);
			break;
		}
		else
		{
			ui->problem_value();
			continue;
		}
	}
	return bus;
}
