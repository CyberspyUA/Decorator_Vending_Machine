#pragma once
#include "Cacao.h"
#include "Tea.h"
#include "Coffee.h"
#include <string>
class VendingMachine {
public:
	void makeDrink(std::string const& name, int const& cup_size, int const& sugar_spoons, int const& drink_choice) const {
		if (drink_choice == 1)
		{
			std::shared_ptr<Drink> coffee = std::make_shared<Coffee>();
			coffee->drink_preparing(name, cup_size, sugar_spoons);
		}
			
		
		else if (drink_choice == 2)
		{
			std::shared_ptr<Drink> tea = std::make_shared<Tea>();
		}
			
		else if (drink_choice == 3)
		{
			std::shared_ptr<Drink> cacao = std::make_shared<Cacao>();
		}
			
	}
	bool sugar_suggestion() const
	{
		bool is_sugar_needed{};
		std::cout << "Цукор потрiбен?\n";
		std::cout << "1 - так, 0 - нi \n";
		std::cin >> is_sugar_needed;
		if (is_sugar_needed == 1 || is_sugar_needed == 0)
			return is_sugar_needed;
		else
			return false;
	}
	int cup_suggestion() const
	{
		while (true)
		{
			int cup_choice{};
			std::cout << "\tОберiть розмiр стакану серед запропонованих:\n"
				<< "1) 100 мл\n"
				<< "2) 200 мл\n"
				<< "3) 300 мл\n"
				<< "4) 400 мл\n"
				<< "5) 500 мл\n";
			std::cin >> cup_choice;
			switch (cup_choice)
			{
			case 1:
				return 100;
			case 2:
				return 200;
			case 3:
				return 300;
			case 4:
				return 400;
			case 5:
				return 500;
			default:
			{
				std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
				break;
			}
			}
		}
	}
	int sugar_adding() const
	{
		int new_sugar_spoons_count{ 1 };
		while (true)
		{
			std::cout << "Цього достатньо? " << "Ложок цукру - " << new_sugar_spoons_count << "\n";
			std::cout << "1 - так, 0 - нi" << "\n";
			int choice{};
			std::cin >> choice;
			if (choice == 1)
			{
				return new_sugar_spoons_count;
			}
			else if (choice == 0)
			{
				new_sugar_spoons_count++;
				continue;
			}
			else
			{
				std::cout << "Введено невiрне значення. Спробуйте ще раз.";
			}
		}
	}
	void drink_options_show() const;
	void cacao_options_show() const;
	void tea_options_show() const;
	void coffee_options_show() const;
	void manual_show() const;
	void introduction_show() const;
};