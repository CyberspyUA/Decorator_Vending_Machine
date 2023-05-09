#pragma once
#include "Drink.h"
class Tea : public Drink {
public:
	void drink_preparing(std::string const& name, int const& cup_size, unsigned const& sugar_spoons) const override {
		boiling(name);
		if (sugar_spoons > 0)
			sugar_adding(sugar_spoons);
		placing_the_cup(cup_size);
		std::cout << "Напій готовий!" << std::endl;
	}
	void boiling(std::string const& name) const override
	{
		std::cout << "Готую " << name << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Додаю листки чаю..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Кип'ячу воду..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Перемішую інгредієнти..." << std::endl;
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
};