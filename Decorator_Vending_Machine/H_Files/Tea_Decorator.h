#pragma once
#include "Basic_Decorator.h"
class Tea_Decorator : public DrinkDecorator
{
	explicit Tea_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
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
		std::cout << "На останок, пропонуємо до відомості 3 цікавих факти про чай" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "\t 1) Згідно з легендою, імператор Шен Нунг відкрив чай у 2732 році до нашої ери.\n"
			<< "Одного разу вітер задув листя з дикого дерева в його горщик з окропом.\n"
			<< "Він сьорбнув інтригуючого напою і був миттєво зачарований його тонким смаком та освіжаючим ефектом.\n"
			<< "Шен Нунг описав тепле відчуття, коли він пив інтригуючу заварку, ніби рідина досліджувала кожну частину його тіла.\n"
			<< "Він назвав заварку ч'а, китайським ієрогліфом, що означає перевіряти або досліджувати." << std::endl
			<< "\t 2) Португальці та голландці вперше завезли чай до Європи в 1610 році." << std::endl
			<< "\t 3) Чай корисний для людей. Чай містить поліфеноли - антиоксиданти, які відновлюють клітини і можуть допомогти \n"
			<< "нашому організму протистояти серцево-судинним захворюванням, раку, остеопорозу, цукровому діабету та іншим недугам." << std::endl;
	}
};