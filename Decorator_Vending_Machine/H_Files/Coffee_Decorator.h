#pragma once
#include "Basic_Decorator.h"
class Coffee_Decorator : public DrinkDecorator
{
	explicit Coffee_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
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
		std::cout << "На останок, пропонуємо до відомості 3 цікавих факти про каву" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "1) Напій з'явився ще у 800 році нашої ери.\n Легенда свідчить, що у 9 столітті пастухи-козопаси помітили вплив кофеїну на своїх кіз, \n"
			<< "які ніби танцювали після того, як з'їдали плоди кавової рослини Coffea. Місцевий монах приготував напій з цих плодів і виявив, що він \n"
			<< "допомагає йому не спати вночі - так з'явилася перша чашка кави." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "2) Існує два основних види какових зерен, які використовуються у приготуванні - арабіка та робуста. Арабіка була знайдена\n"
				  << "на Східному Африканському континенті, вирізняється особливою солодкістю. У свою чергу робуста була знайдена у країнах Західної Африки,\n"
				  << "вирізняється гірчинкою та кислинкою у напої." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "3) За даними Harvard Health Publishing, дослідження пов'язують помірне споживання кави (близько трьох-чотирьох чашок на день)\n" 
			  <<"з довшою тривалістю життя, а також зі зниженням ризику серцево - судинних захворювань, діабету 2 типу та хвороби Паркінсона." << std::endl;
	}
};