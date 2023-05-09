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
		std::cout << "З вас " << total_price << " гривень" << std::endl;
		std::cout << "Оцініть ваші враження від 1 до 10" << std::endl;
		unsigned int rating{};
		std::cin >> rating;
		std::cout << std::endl << "Дякуюємо, що допомагаєте нам ставати краще!" << std::endl;
		std::cout << "На останок, пропонуємо до відомості 3 цікавих факти про какао" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout <<"1)Залишки какао на глиняному посуді в Еквадорі свідчать про те, що люди вживали цю рослину вже 5 000 років тому. \n"
			      <<"Понад 3 000 років тому какао широко культивувалося народами майя, тольтеків та ацтеків, які готували напій з какао-бобів."
				  << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout <<"2)Какао-боби, які росли в екваторіальному регіоні Веракрус і Мексиці, використовувалися як валюта до 1737 року.\n"
				  <<"Індичка дорівнювала 100 какао-бобів, -розповідає Кемерон Л.МакНіл, автор книги Шоколад у Мезоамериці."
				  << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "3)Чорний шоколад багатий на поживні речовини. Виготовлений з насіння какао-дерева, він є одним з найкращих джерел антиоксидантів на планеті.\n"
				  << "Дослідження показують, що чорний шоколад може поліпшити ваше здоров'я і знизити ризик серцевих захворювань, покращуючи кровотік і знижуючи кров'яний тиск."
				  << std::endl;
	}
};