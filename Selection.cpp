#include "Selection.h"

Vehicle* Selection::select(UserInterface* ui)
{
	ui->selection_alert();
	while (true)
	{
		int passenger;
		while (true)
		{
			ui->passengers_req();
			std::cin >> passenger;
			if (ui->check_symbols() || passenger < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		double luggage;
		while (true)
		{
			ui->max_luggage_select_req();
			std::cin >> luggage;
			if (ui->check_symbols() || luggage < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		double volume;
		while (true)
		{
			ui->volume_req();
			std::cin >> volume;
			if (ui->check_symbols() || volume < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		double price;
		while (true)
		{
			ui->price_req();
			std::cin >> price;
			if (ui->check_symbols() || price < 0)
			{
				ui->problem_value();
				continue;
			}
			break;
		}
		if ((passenger <= 2 && passenger > 0) && (luggage <= 10 && luggage >= 0) && (volume <= 0.3 && volume >= 0) &&
			(price <= 30 && price >= 10))
		{
			Motorcycle* m = new Motorcycle;
			if (luggage > 0 || volume > 0)
			{
				m->set_carriage(true);
				m->change_name();
			}
			return m;
		}
		else if ((passenger <= 4 && passenger > 0) && (luggage <= 120 && luggage >= 0) && (volume <= 1 && volume >= 0) &&
			(price >= 30 && price <= 60))
		{
			PassengerCar* c = new PassengerCar;
			return c;
		}
		else if ((passenger <= 25 && passenger > 0) && (luggage <= 500 && luggage >= 0) && (volume <= 10 && volume >= 0) &&
			(price <= 100 && price >= 60))
		{
			Bus* b = new Bus;
			return b;
		}
		else if ((passenger <= 2 && passenger > 0) && (luggage <= 10000 && luggage >= 0) && (volume <= 90 && volume >= 0) &&
			(price <= 100 && price >= 60))
		{
			Truck* t = new Truck;
			return t;
		}
		else
		{
			ui->bad_selecting();
			while (true)
			{
				ui->contin();
				ui->user_prompt();
				int choice;
				std::cin >> choice;
				if (ui->check_symbols() || choice > 2 || choice < 0)
				{
					ui->problem_operation();
					continue;
				}
				else if (choice == 0)
				{
					return nullptr;
				}
				else if (choice == 1)
				{
					break;
				}
			}
		}
		continue;
	}
}