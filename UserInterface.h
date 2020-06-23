#pragma once
#include <iostream>
#include <string>

struct Messages
{
	const std::string greeting{ "\n\t\t *************** Hello! You are using a vehicle creation program *************** \n\n" };
	const std::string main_message{
				"\t\t\t\tTo request a bus, press                 ............1.\n\
				To request a truck, press               ............2.\n\
				To request a motorcycle, press          ............3.\n\
				To request a car, press                 ............4.\n\
				To select a vehicle, press              ............5.\n\
				If you want to exit the program, press  ............0.\n" };
	const std::string yes{ "yes\n" };
	const std::string no{ "no\n" };
	const std::string user_prompt{ "Make your choice: " };
	const std::string show_vector_req{ "Would you like to see all your requested vehicles?\nYes - 1. No - 0.\n" };
	const std::string repeat{ "Would you like to request or select a vehicle again?\nYes - 1. No - 0.\n" };
	const std::string contin{ "Do you want to continue selecting?\nYes - 1. No - 0\n" };
	const std::string problem_operation{ "You entered the wrong number of operation, please try again!\n" };
	const std::string problem_value{ "You entered the wrong value of parametr, please try again!\n" };
	const std::string vehicle_weight_req{ "Please set the total weight of vehicle (kilograms)\n\
(limits: for bus - 15000, for car - 2500, truck - 40000, motorcycle - 300): " };
	const std::string vehicle_max_speed_req{ "Please set the max speed (kilometers per hour)\n\
(limits: for bus - 120, for car - 200, for truck - 110, for motorcycle - 250): " };
	const std::string vehicle_fuel_consumption_req{ "Please set the fuel consumption (in liters per 100 kilometers)\n\
(limits: for bus - 18, for car - 6, for truck - 35, for motorcycle - 5): " };
	const std::string selection_alert{ "You have choosen selection. Please follow the instructions!\n" };
	const std::string bus_alert{ "You have choosen bus to create. Please describe the bus by setting parameters.\n" };
	const std::string passenger_car_alert{ "You have choosen car to create. Please describe the car by setting parameters.\n" };
	const std::string motorcycle_alert{ "You have choosen motorcycle to create. Please describe the motorcycle by setting parameters.\n" };
	const std::string truck_alert{ "You have choosen truck to create. Please describe the truck by setting parameters.\n" };
	const std::string passengers_req{ "How many passengers will be carried\n\
(limits: for bus - 25, for car - 4, for truck - 2, for motorcycle - 2): " };
	const std::string volume_req{ "What is the maximum volume (cubic meters)\n\
(limits: for bus - 10, for car - 1, for truck - 90, for motorcycle - 0.3): " };
	const std::string price_req{ "How much are you willing to pay for a rental vehicle (dollars per day): " };
	const std::string conditioner_req{ "Do yo want to have a conditioner (yes - 1, no - 0): " };
	const std::string reclining_seat_req{ "Do you want to have reclining seats (yes - 1, no - 0): " };
	const std::string max_luggage_pass_req{ "What is the maximum luggage weight for a passenger (kilograms)\n\
(limit: 20): " };
	const std::string max_luggage_req{ "What is the total maximum luggage (kilograms)\n\
(limits: for bus - 500, for car - 120, for motorcycle - 10): " };
	const std::string max_luggage_select_req{ "What is the total maximum luggage(kilograms), in the case of a truck, the maximum carrying weight(kilograms)\n\
(limits: for bus - 500, for car - 120, for motorcycle - 10, truck - 10000) : " };
	const std::string body_type_req{ "There is a huge variety of body styles for cars. Here are the main: sedan, wagon, coupe, crossover.\n\
What body type do you choose (you must write one of the proposed options above): " };
	const std::string car_class_req{ "In total, there are 4 main classes of vehicles: small, medium, large and premium\n\
(where small is the lowest class, and large is the highest).\nWhat class do you choose (you must write one of the proposed options above): " };
	const std::string seat_type_req{ "There are many types of seats. We have identified the most basic types: ordinary, sports, comfortable\n\
What type of seats do you choose (you must write one of the proposed options above): " };
	const std::string motorcycle_carriage_req{ "Do you want to have a carriage (yes - 1, no - 0): " };
	const std::string truck_carrying_req{ "What is the weight carrying of the truck (kilograms)\n\
(limit: 10000): " };
	const std::string comfort_message{ "The number of comfort points of your vehicle (on a seven-point scale): " };
	const std::string good_selecting{ "Splendid! We have found for you the most suitable vehicle that meets all conditions!\n\
Since you used the selection function, we provide you with a vehicle with standard characteristics that\ncorrespond to your conditions.\n\
If you want to receive a car with certain parameters, please fill out the application form.\n" };
	const std::string bad_selecting{ "There is no suitable vehicle for you! Try again!\n" };
	const std::string result_creation{ " request has been accepted. Well done!\n" };
	const std::string result_selection{ " was selected. Well done! Let's roll!\n" };
	const std::string empty_vector_of_vehicles{ "You have not yet created a request for one of the vehicles!\n" };
	const std::string user_checks{ "Your entered values:\n" };
	const std::string vehicle_weight_ans{ "Total weight of vehicle (kilograms): " };
	const std::string vehicle_max_speed_ans{ "Maximum speed (kilometers per hour): " };
	const std::string vehicle_fuel_consumption_ans{ "Fuel consumption per 100 kilometers (liters): " };
	const std::string max_luggage_ans{ "Maximum total luggage weight (kilograms): " };
	const std::string volume_ans { "Maximum volume (cubic meters): " };
	const std::string passengers_ans { "Number of passengers: " };
	const std::string body_type_ans{ "Body type: " };
	const std::string car_class_ans { "Car class: " };
	const std::string seat_type_ans { "Seat upholstery: " };
	const std::string motorcycle_carriage_ans{ "Carriage: " };
	const std::string truck_carrying_ans{ "Carrying weight (kilograms): " };
	const std::string mux_luggage_pass_ans{ "Maximum luggage weight for one passenger (kilograms): " };
	const std::string conditioner_ans { "Conditioner: " };
	const std::string reclining_seat_ans { "Reclining seats: " };
	const std::string conclusion_creation { "Great! We will contact you as soon as we find a suitable vehicle, that matches your parameters.\n" };
	const std::string exit{ "The program was completed by the user. Good bye!\n" };
};

class UserInterface
{
private:
	Messages messages;

public:
	bool check_symbols();
	void show_comfort(const int count_comfort);
	
	void greeting();
	void main_message();
	void yes();
	void no();
	void user_prompt();
	void show_vector_req();
	void repeat();
	void contin();
	void problem_operation();
	void problem_value();
	void vehicle_weight_req();
	void vehicle_max_speed_req();
	void vehicle_fuel_consumption_req();
	void selection_alert();
	void bus_alert();
	void passenger_car_alert();
	void motorcycle_alert();
	void truck_alert();
	void passengers_req();
	void volume_req();
	void price_req();
	void conditioner_req();
	void reclining_seat_req();
	void max_luggage_pass_req();
	void max_luggage_req();
	void max_luggage_select_req();
	void body_type_req();
	void car_class_req();
	void seat_type_req();
	void motorcycle_carriage_req();
	void truck_carrying_req();
	void good_selecting();
	void bad_selecting();
	void result_creation(std::string vehicle_name);
	void result_selection(std::string vehicle_name);
	void user_checks();
	void vehicle_weight_ans();
	void vehicle_max_speed_ans();
	void vehicle_fuel_consumption_ans();
	void max_luggage_ans();
	void volume_ans();
	void passengers_ans();
	void body_type_ans();
	void car_class_ans();
	void seat_type_ans();
	void motorcycle_carriage_ans();
	void truck_carrying_ans();
	void max_luggage_pass_ans();
	void conditioner_ans();
	void reclining_seat_ans();
	void conclusion_creation();
	void empty_vector_of_vehicles();
	void exit();
};