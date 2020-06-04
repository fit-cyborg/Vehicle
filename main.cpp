//THE PLAN:
//Formulation of the problem
//Greetings
//User choice
//Vehile creation
//Check user parameters
//Consummation

#include "Vehicle.h"
#include "PassengerCar.h"
#include "Motorcycle.h"
#include "Truck.h"
#include "Bus.h"
#include "UserInterface.h"
#include "Produce.h"
enum Vehicle_enum
{
	bus = 1,
	truck,
	motorcycle,
	passenger_car
};
int main()
{
	//Instances of classes
	UserInterface ui;
	Produce pr;
	Vehicle* veh;
	//std::string vehile;
	int choice = 0;
	//Program logic
	ui.greeting();
	while (true)
	{
		ui.main_message();
		ui.user_prompt();
		std::cin >> choice;
		if (choice == 0)
		{
			ui.exit();
			break;
		}
		else if (choice == bus)
		{
			//pr.create_bus();
			//ui.result(veh);
		}
		else if (choice == truck)
		{
			//pr.create_truck();
			//ui.result(veh);
		}
		else if (choice == motorcycle)
		{
			//pr.create_motorcycle();
			//ui.result(veh);
		}
		else if (choice == passenger_car)
		{
			//pr.create_passenger_car(veh);
			//ui.result(veh);
		}
		else
		{
			ui.problem();
			continue;
		}
		ui.repeat();
		ui.user_prompt();
		std::cin >> choice;
		if (choice == 0)
		{
			ui.exit();
			break;
		}
	}
	return 0;
}