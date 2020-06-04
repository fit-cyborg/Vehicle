#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

struct Messages
{
	const std::string greeting{ "\n\t\t *************** Hello! You are using a vehicle creation program *************** \n\n" };
	const std::string main_message{
				"\t\t\t\tTo create a bus, press number          .......1.\n\
				To create a truck, press number        .......2.\n\
				To create a motorcycle, press number   .......3.\n\
				To create a car, press number          .......4.\n\
				If you want to exit the program, press .......0.\n" };
	const std::string user_prompt{ "Make your choice: " };
	const std::string repeat{ "Would you like to create a vehicle again?\nYes - 1. No - 0.\n" };
	const std::string problem{ "You entered the wrong number of operation, please try again!\n" };
	const std::string vehicle_weight{ "Please set the total weight: " };
	const std::string vehicle_max_speed{ "Please set the max speed: " };
	const std::string vehicle_fuel_consumption{ "Please set the fuel consumption in liters per 100 kilometers: " };
	const std::string bus_alert{ "You have choosen bus to create. Please describe the bus by setting parameters.\n" };
	const std::string passenger_car_alert{ "You have choosen car to create. Please describe the car by setting parameters.\n" };
	const std::string motorcycle_alert{ "You have choosen motorcycle to create. Please describe the motorcycle by setting parameters.\n" };
	const std::string truck_alert{ "You have choosen truck to create. Please describe the truck by setting parameters.\n" };
	const std::string number_of_passengers_req{ "How many passengers will be carried: " };
	const std::string conditioner_req{ "Do yo want to have a conditioner: " };
	const std::string reclining_seat_req{ "Do you want to have reclining seat: " };
	const std::string mux_luggage_pass_req{ "What is the maximum luggage weight for a passenger: " };
	const std::string max_luggage_req{ "What is the total maximum luggage: " };
	const std::string body_type_req{ "What is the body type: " };
	const std::string car_segment_req{ "What is the segment/clas: " };
	const std::string motorcycle_carriage_req{ "Do you want to have a carriage in motorcycle:" };
	const std::string truck_carrying_req{ "What is the load of the truck?" };
	const std::string comfort_message{ "The number of comfort points of your vehicle is " };
	const std::string result{ " was created. Well done!\n" };
	const std::string exit{ "The program was completed by the user. Good bye!\n" };
};

class UserInterface
{
private:
	Messages messages;

public:
	void greeting();
	void main_message();
	void user_prompt();
	void repeat();
	void problem();
	void vehicle_weight();
	void vehicle_max_speed();
	void vehicle_fuel_consumption();
	void bus_alert();
	void passenger_car_alert();
	void motorcycle_alert();
	void truck_alert();
	void number_of_passengers_req();
	void conditioner_req();
	void reclining_seat_req();
	void mux_luggage_pass_req();
	void max_luggage_req();
	void body_type_req();
	void car_segment_req();
	void comfort_message();
	void motorcycle_carriage_req();
	void truck_carrying_req();
	void result(Vehicle* veh);
	void exit();
};