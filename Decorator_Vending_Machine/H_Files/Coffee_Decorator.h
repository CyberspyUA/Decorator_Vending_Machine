#pragma once
#include "Basic_Decorator.h"
class Coffee_Decorator : public DrinkDecorator
{
public:
	explicit Coffee_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
	void drink_preparing(std::string const& drink_name, int const& cup_size, unsigned const& sugar_quantity) const override
	{
		DrinkDecorator::drink_preparing(drink_name, cup_size, sugar_quantity);
		std::cout << "Ваше замовлення: \n" << drink_name << " об'ємом " << cup_size << " iз " << " ложками цукру.\n";
		double total_price{ Coffee_Decorator::drink_price(cup_size, sugar_quantity) };
		std::cout << "З вас " << total_price << " гривень" << std::endl;
		std::cout << "Оцiнiть вашi враження вiд 1 до 10" << std::endl;
		unsigned int rating{};
		std::cin >> rating;
		std::cout << std::endl << "Дякуюємо, що допомагаєте нам ставати краще!" << std::endl;
		std::cout << "На останок, пропонуємо до вiдомостi 3 цiкавих факти про каву" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "1) Напiй з'явився ще у 800 роцi нашої ери.\n Легенда свiдчить, що у 9 столiттi пастухи-козопаси помiтили вплив кофеїну на своїх кiз, \n"
			<< "якi нiби танцювали пiсля того, як з'їдали плоди кавової рослини Coffea. Мiсцевий монах приготував напiй з цих плодiв i виявив, що вiн \n"
			<< "допомагає йому не спати вночi - так з'явилася перша чашка кави." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "2) iснує два основних види какових зерен, якi використовуються у приготуваннi - арабiка та робуста. Арабiка була знайдена\n"
				  << "на Схiдному Африканському континентi, вирiзняється особливою солодкiстю. У свою чергу робуста була знайдена у країнах Захiдної Африки,\n"
				  << "вирiзняється гiрчинкою та кислинкою у напої." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "3) За даними Harvard Health Publishing, дослiдження пов'язують помiрне споживання кави (близько трьох-чотирьох чашок на день)\n" 
			  <<"з довшою тривалiстю життя, а також зi зниженням ризику серцево - судинних захворювань, дiабету 2 типу та хвороби Паркiнсона." << std::endl;
	}
	double drink_price(int const& cup_size, unsigned int const& sugar_quantity) const override
	{
		auto cup_size_ = static_cast<double>(cup_size);
		return 30.0 + (cup_size_ / 100) + sugar_quantity;
	}
};