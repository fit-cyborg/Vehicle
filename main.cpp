//THE PLAN:
//Problem statement
//Greetings
//User choice
//Vehile creation or selection
//Check user parameters
//Consummation

#include <vector>
#include "Vehicle.h"
#include "PassengerCar.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Bus.h"
#include "UserInterface.h"
#include "Produce.h"
#include "Selection.h"

enum Vehicle_enum
{
	bus = 1,
	truck,
	motorcycle,
	passenger_car
};

std::string define_vehicle(Vehicle* veh)
{
	return(veh->vehicle_name());
}

void print_vehicles(std::vector<Vehicle*> vehicles, UserInterface* ui)
{
	if (vehicles.empty())
	{
		ui->empty_vector_of_vehicles();
	}
	else
	{
		for (auto it = vehicles.begin(); it != vehicles.end(); ++it)
		ui->result_creation((*it)->vehicle_name());
	}
}

int main()
{
	//Instances of classes
	UserInterface ui;
	Produce pr;
	Selection s;
	Vehicle* veh;
	//Stuff
	std::vector<Vehicle*> vehicles;
	int choice = 0;
	int count_comfort = 0;
	//Program logic
	ui.greeting();
	while (true)
	{
		ui.main_message();
		ui.user_prompt();
		std::cin >> choice;
		if (ui.check_symbols() || choice > 5 || choice < 0)
		{
			ui.problem_operation();
			continue;
		}
		else if (choice == 0)
		{
			ui.exit();
			return 0;
		}
		else if (choice == bus)
		{
			veh = pr.create_bus(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.show_comfort(veh->count_comfort());
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == truck)
		{
			veh = pr.create_truck(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == motorcycle)
		{
			veh = pr.create_motorcycle(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.show_comfort(veh->count_comfort());
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == passenger_car)
		{
			veh = pr.create_passenger_car(&ui);
			ui.result_creation(veh->vehicle_name());
			ui.user_checks();
			veh->print(&ui);
			ui.show_comfort(veh->count_comfort());
			ui.conclusion_creation();
			vehicles.push_back(veh);
		}
		else if (choice == 5)
		{
			veh = s.select(&ui);
			if (veh != 0)
			{
				ui.good_selecting();
				ui.result_selection(define_vehicle(veh));
				veh->print(&ui);
			}
		}
		ui.show_vector_req();
		while (true)
		{
			ui.user_prompt();
			std::cin >> choice;
			if (ui.check_symbols() || choice > 1 || choice < 0)
			{
				ui.problem_operation();
				continue;
			}
			else if (choice == 1)
			{
				print_vehicles(vehicles, &ui);
				break;
			}
			else if (choice == 0)
			{
				break;
			}
		}
		ui.repeat();
		while (true)
		{
			ui.user_prompt();
			std::cin >> choice;
			if (ui.check_symbols() || choice > 1 || choice < 0)
			{
				ui.problem_operation();
				continue;
			}
			else if (choice == 1)
			{
				break;
			}
			else if (choice == 0)
			{
				ui.exit();
				return 0;
			}
		}
	}
	return 0;
}