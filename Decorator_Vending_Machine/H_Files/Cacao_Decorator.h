#pragma once
#include "Basic_Decorator.h"
class Cacao_Decorator : public DrinkDecorator
{
	explicit Cacao_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
	void drink_preparing(std::string const& drink_name, int const& cup_size, unsigned const& sugar_quantity) const override
	{
		DrinkDecorator::drink_preparing;
		std::cout << "Ваше замовлення: \n" << drink_name << " об'ємом " << cup_size << " із " << " ложками цукру.\n";
		double total_price{ Drink::drink_price(cup_size, sugar_quantity) };
		std::cout << "З вас " << total_price << std::endl;
		std::cout << "Оцініть ваші враження від 1 до 10" << std::endl;
		unsigned int rating{};
		std::cin >> rating;
		std::cout << std::endl << "Дякуюємо, що допомагаєте нам ставати краще!" << std::endl;
	}
};