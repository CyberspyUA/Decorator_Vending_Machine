#pragma once
#include "Basic_Decorator.h"
class Cacao_Decorator : public DrinkDecorator
{
public:
	explicit Cacao_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
	void drink_preparing(std::string const& drink_name, int const& cup_size, unsigned const& sugar_quantity) const override
	{
		DrinkDecorator::drink_preparing(drink_name, cup_size, sugar_quantity);
		std::cout << "Ваше замовлення: \n" << drink_name << " об'ємом " << cup_size << " iз " << " ложками цукру.\n";
		double total_price{ Cacao_Decorator::drink_price(cup_size, sugar_quantity) };
		std::cout << "З вас " << total_price << " гривень" << std::endl;
		std::cout << "Оцiнiть вашi враження вiд 1 до 10" << std::endl;
		unsigned int rating{};
		std::cin >> rating;
		std::cout << std::endl << "Дякуюємо, що допомагаєте нам ставати краще!" << std::endl;
		std::cout << "На останок, пропонуємо до вiдомостi 3 цiкавих факти про какао" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout <<"1)Залишки какао на глиняному посудi в Еквадорi свiдчать про те, що люди вживали цю рослину вже 5 000 рокiв тому. \n"
			      <<"Понад 3 000 рокiв тому какао широко культивувалося народами майя, тольтекiв та ацтекiв, якi готували напiй з какао-бобiв."
				  << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout <<"2)Какао-боби, якi росли в екваторiальному регiонi Веракрус i Мексицi, використовувалися як валюта до 1737 року.\n"
				  <<"iндичка дорiвнювала 100 какао-бобiв, -розповiдає Кемерон Л.МакНiл, автор книги Шоколад у Мезоамерицi."
				  << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "3)Чорний шоколад багатий на поживнi речовини. Виготовлений з насiння какао-дерева, вiн є одним з найкращих джерел антиоксидантiв на планетi.\n"
				  << "Дослiдження показують, що чорний шоколад може полiпшити ваше здоров'я i знизити ризик серцевих захворювань, покращуючи кровотiк i знижуючи кров'яний тиск."
				  << std::endl;
	}
	double drink_price(int const& cup_size, unsigned int const& sugar_quantity) const override
	{
		auto cup_size_ = static_cast<double>(cup_size);
		return 40.0 + (cup_size_ / 100) + sugar_quantity;
	}
};