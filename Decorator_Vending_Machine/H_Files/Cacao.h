#pragma once
#include "Drink.h"
class Cacao : public Drink {
public:
	void drink_preparing(std::string const& name, int const& cup_size, unsigned const& sugar_spoons) const override{
		boiling(name);
		if (sugar_spoons > 0)
			sugar_adding(sugar_spoons);
		placing_the_cup(cup_size);
		std::cout << "Напiй готовий!" << std::endl;
	}
	void boiling(std::string const& name) const override
	{
		std::cout << "Готую " << name << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Додаю какао порошок..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Кип'ячу молоко..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Перемiшую iнгредiєнти..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
	}
	void sugar_adding(unsigned int const& sugar_spoons_quantity) const override
	{
		std::cout << "Додаю " << sugar_spoons_quantity << " ложок цукру." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
	}
	void placing_the_cup(int const& cup_size) const override
	{
		std::cout << "Ставлю стакан об'ємом " << cup_size << " мл." << std::endl;
	}
	double drink_price(int const& cup_size, unsigned int const& sugar_spoons) const override
	{
		double cup_price{};
		double sugar_price_{};
		if (cup_size == 100)
		{
			cup_price = 1.0;
			sugar_price_ = sugar_price(sugar_spoons);
			return 40.0 + cup_price + sugar_price_;
		}
		else if (cup_size == 200)
		{
			cup_price = 2.0;
			sugar_price_ = sugar_price(sugar_spoons);
			return 40.0 + cup_price + sugar_price_;
		}
		else if (cup_size == 300)
		{
			cup_price = 3.0;
			sugar_price_ = sugar_price(sugar_spoons);
			return 40.0 + cup_price + sugar_price_;
		}
		else if (cup_size == 400)
		{
			cup_price = 4.0;
			sugar_price_ = sugar_price(sugar_spoons);
			return 40.0 + cup_price + sugar_price_;
		}
		else if (cup_size == 500)
		{
			cup_price = 5.0;
			sugar_price_ = sugar_price(sugar_spoons);
			return 40.0 + cup_price + sugar_price_;
		}
		else return 40.0;
	}
	double sugar_price(unsigned int const& sugar_spoons) const override
	{
		auto sugar_price = static_cast<double>(sugar_spoons);
		return sugar_price;
	}
};