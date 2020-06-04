#include "UserInterface.h"

void UserInterface::greeting()
{
	std::cout << messages.greeting;
}
void UserInterface::main_message()
{
	std::cout << messages.main_message;
}

void UserInterface::user_prompt()
{
	std::cout << messages.user_prompt;
}

void UserInterface::result(Vehicle* veh)
{
	veh->vehicle_name();
	std::cout << messages.result;
}

void UserInterface::repeat()
{
	std::cout << messages.repeat;
}

void UserInterface::problem()
{
	std::cout << messages.problem;
}

void UserInterface::vehicle_weight()
{
	std::cout << messages.vehicle_weight;
}

void UserInterface::vehicle_max_speed()
{
	std::cout << messages.vehicle_max_speed;
}

void UserInterface::vehicle_fuel_consumption()
{
	std::cout << messages.vehicle_fuel_consumption;
}

void UserInterface::bus_alert()
{
	std::cout << messages.bus_alert;
}

void UserInterface::passenger_car_alert()
{
	std::cout << messages.passenger_car_alert;
}

void UserInterface::motorcycle_alert()
{
	std::cout << messages.motorcycle_alert;
}

void UserInterface::truck_alert()
{
	std::cout << messages.truck_alert;
}

void UserInterface::number_of_passengers_req()
{
	std::cout << messages.number_of_passengers_req;
}

void UserInterface::conditioner_req()
{
	std::cout << messages.conditioner_req;
}

void UserInterface::reclining_seat_req()
{
	std::cout << messages.reclining_seat_req;
}

void UserInterface::mux_luggage_pass_req()
{
	std::cout << messages.mux_luggage_pass_req;
}

void UserInterface::max_luggage_req()
{
	std:: cout << messages.max_luggage_req;
}

void UserInterface::body_type_req()
{
	std::cout << messages.body_type_req;
}

void UserInterface::car_segment_req()
{
	std::cout << messages.car_segment_req;
}

void UserInterface::comfort_message()
{
	std::cout << messages.comfort_message;
}

void UserInterface::motorcycle_carriage_req()
{
	std::cout << messages.motorcycle_carriage_req;
}

void UserInterface::truck_carrying_req()
{
	std::cout << messages.truck_carrying_req;
}

void UserInterface::exit()
{
	std::cout << messages.exit;
}