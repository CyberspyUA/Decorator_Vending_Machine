#pragma once
#include "Basic_Decorator.h"
class Tea_Decorator : public DrinkDecorator
{
public:
	explicit Tea_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
	void drink_preparing(std::string const& drink_name, int const& cup_size, unsigned const& sugar_quantity) const override
	{
		DrinkDecorator::drink_preparing(drink_name, cup_size, sugar_quantity);
		std::cout << "Ваше замовлення: \n" << drink_name << " об'ємом " << cup_size << " iз " << " ложками цукру.\n";
		double total_price{ Tea_Decorator::drink_price(cup_size, sugar_quantity) };
		std::cout << "З вас " << total_price << " гривень" << std::endl;
		std::cout << "Оцiнiть вашi враження вiд 1 до 10" << std::endl;
		unsigned int rating{};
		std::cin >> rating;
		std::cout << std::endl << "Дякуюємо, що допомагаєте нам ставати краще!" << std::endl;
		std::cout << "На останок, пропонуємо до вiдомостi 3 цiкавих факти про чай" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "\t 1) Згiдно з легендою, iмператор Шен Нунг вiдкрив чай у 2732 роцi до нашої ери.\n"
			<< "Одного разу вiтер задув листя з дикого дерева в його горщик з окропом.\n"
			<< "Вiн сьорбнув iнтригуючого напою i був миттєво зачарований його тонким смаком та освiжаючим ефектом.\n"
			<< "Шен Нунг описав тепле вiдчуття, коли вiн пив iнтригуючу заварку, нiби рiдина дослiджувала кожну частину його тiла.\n"
			<< "Вiн назвав заварку ч'а, китайським iєроглiфом, що означає перевiряти або дослiджувати." << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(3));
			std::cout << "\t 2) Португальцi та голландцi вперше завезли чай до Європи в 1610 роцi." << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(3));
			std::cout << "\t 3) Чай корисний для людей. Чай мiстить полiфеноли - антиоксиданти, якi вiдновлюють клiтини i можуть допомогти \n"
			<< "нашому органiзму протистояти серцево-судинним захворюванням, раку, остеопорозу, цукровому дiабету та iншим недугам." << std::endl;
	}
	double drink_price(int const& cup_size, unsigned int const& sugar_quantity) const override
	{
		auto cup_size_ = static_cast<double>(cup_size);
		return 20.0 + (cup_size_ / 100) + sugar_quantity;
	}
};