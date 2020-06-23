#include "UserInterface.h"

bool UserInterface::check_symbols()
{
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
		return true;
	}
	return false;
}

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

void UserInterface::yes()
{
	std::cout << messages.yes;
}

void UserInterface::no()
{
	std::cout << messages.no;
}

void UserInterface::result_creation(std::string vehicle_name)
{
	std::cout << vehicle_name << messages.result_creation;
}

void UserInterface::result_selection(std::string vehicle_name)
{
	std::cout << vehicle_name << messages.result_selection;
}

void UserInterface::show_vector_req()
{
	std::cout << messages.show_vector_req;
}

void UserInterface::repeat()
{
	std::cout << messages.repeat;
}

void UserInterface::contin()
{
	std::cout << messages.contin;
}

void UserInterface::problem_operation()
{
	std::cout << messages.problem_operation;
}

void UserInterface::problem_value()
{
	std::cout << messages.problem_value;
}

void UserInterface::vehicle_weight_req()
{
	std::cout << messages.vehicle_weight_req;
}

void UserInterface::vehicle_max_speed_req()
{
	std::cout << messages.vehicle_max_speed_req;
}

void UserInterface::vehicle_fuel_consumption_req()
{
	std::cout << messages.vehicle_fuel_consumption_req;
}

void UserInterface::selection_alert()
{
	std::cout << messages.selection_alert;
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

void UserInterface::passengers_req()
{
	std::cout << messages.passengers_req;
}

void UserInterface::volume_req()
{
	std::cout << messages.volume_req;
}

void UserInterface::price_req()
{
	std::cout << messages.price_req;
}

void UserInterface::conditioner_req()
{
	std::cout << messages.conditioner_req;
}

void UserInterface::reclining_seat_req()
{
	std::cout << messages.reclining_seat_req;
}

void UserInterface::max_luggage_pass_req()
{
	std::cout << messages.max_luggage_pass_req;
}

void UserInterface::max_luggage_req()
{
	std:: cout << messages.max_luggage_req;
}

void UserInterface::max_luggage_select_req()
{
	std::cout << messages.max_luggage_select_req;
}

void UserInterface::body_type_req()
{
	std::cout << messages.body_type_req;
}

void UserInterface::car_class_req()
{
	std::cout << messages.car_class_req;
}

void UserInterface::seat_type_req()
{
	std::cout << messages.seat_type_req;
}

void UserInterface::motorcycle_carriage_req()
{
	std::cout << messages.motorcycle_carriage_req;
}

void UserInterface::truck_carrying_req()
{
	std::cout << messages.truck_carrying_req;
}

void UserInterface::good_selecting()
{
	std::cout << messages.good_selecting;
}

void UserInterface::bad_selecting()
{
	std::cout << messages.bad_selecting;
}

void UserInterface::user_checks()
{
	std::cout << messages.user_checks;
}

void UserInterface::vehicle_weight_ans()
{
	std::cout << messages.vehicle_weight_ans;
}

void UserInterface::vehicle_max_speed_ans()
{
	std::cout << messages.vehicle_max_speed_ans;
}

void UserInterface::vehicle_fuel_consumption_ans()
{
	std::cout << messages.vehicle_fuel_consumption_ans;
}

void UserInterface::max_luggage_ans()
{
	std::cout << messages.max_luggage_ans;
}

void UserInterface::volume_ans()
{
	std::cout << messages.volume_ans;
}

void UserInterface::passengers_ans()
{
	std::cout << messages.passengers_ans;
}

void UserInterface::body_type_ans()
{
	std::cout << messages.body_type_ans;
}

void UserInterface::car_class_ans()
{
	std::cout << messages.car_class_ans;
}

void UserInterface::seat_type_ans()
{
	std::cout << messages.seat_type_ans;
}

void UserInterface::motorcycle_carriage_ans()
{
	std::cout << messages.motorcycle_carriage_ans;
}

void UserInterface::truck_carrying_ans()
{
	std::cout << messages.truck_carrying_ans;
}

void UserInterface::max_luggage_pass_ans()
{
	std::cout << messages.mux_luggage_pass_ans;
}

void UserInterface::conditioner_ans()
{
	std::cout << messages.conditioner_ans;
}

void UserInterface::reclining_seat_ans()
{
	std::cout << messages.reclining_seat_ans;
}

void UserInterface::conclusion_creation()
{
	std::cout << messages.conclusion_creation;
}

void UserInterface::empty_vector_of_vehicles()
{
	std::cout << messages.empty_vector_of_vehicles;
}

void UserInterface::show_comfort(const int count_comfort)
{
	std::cout << messages.comfort_message << count_comfort << "\n";
}

void UserInterface::exit()
{
	std::cout << messages.exit;
}