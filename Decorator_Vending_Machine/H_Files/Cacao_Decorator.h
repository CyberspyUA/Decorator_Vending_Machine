#pragma once
#include "Basic_Decorator.h"
class Cacao_Decorator : public DrinkDecorator
{
	explicit Cacao_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
	void drink_preparing(std::string const& drink_name, int const& cup_size, unsigned const& sugar_quantity) const override
	{
		DrinkDecorator::drink_preparing;
		std::cout << "���� ����������: \n" << drink_name << " ��'���� " << cup_size << " �� " << " ������� �����.\n";
		double total_price{ Drink::drink_price(cup_size, sugar_quantity) };
		std::cout << "� ��� " << total_price << std::endl;
		std::cout << "������ ���� �������� �� 1 �� 10" << std::endl;
		unsigned int rating{};
		std::cin >> rating;
		std::cout << std::endl << "��������, �� ���������� ��� ������� �����!" << std::endl;
	}
};