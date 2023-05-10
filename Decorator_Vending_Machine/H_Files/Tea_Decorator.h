#pragma once
#include "Basic_Decorator.h"
class Tea_Decorator : public DrinkDecorator
{
public:
	explicit Tea_Decorator(std::shared_ptr<Drink> drink) : DrinkDecorator(drink) {};
	void drink_preparing(std::string const& drink_name, int const& cup_size, unsigned const& sugar_quantity) const override
	{
		DrinkDecorator::drink_preparing(drink_name, cup_size, sugar_quantity);
		std::cout << "���� ����������: \n" << drink_name << " ��'���� " << cup_size << " i� " << " ������� �����.\n";
		double total_price{ Tea_Decorator::drink_price(cup_size, sugar_quantity) };
		std::cout << "� ��� " << total_price << " �������" << std::endl;
		std::cout << "��i�i�� ���i �������� �i� 1 �� 10" << std::endl;
		unsigned int rating{};
		std::cin >> rating;
		std::cout << std::endl << "��������, �� ���������� ��� ������� �����!" << std::endl;
		std::cout << "�� �������, ��������� �� �i������i 3 �i����� ����� ��� ���" << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "\t 1) ��i��� � ��������, i�������� ��� ���� �i����� ��� � 2732 ���i �� ���� ���.\n"
			<< "������ ���� �i��� ����� ����� � ������ ������ � ���� ������ � �������.\n"
			<< "�i� �������� i����������� ����� i ��� ������ ����������� ���� ������ ������ �� ���i������ �������.\n"
			<< "��� ���� ������ ����� �i������, ���� �i� ��� i��������� �������, �i�� �i���� ����i������� ����� ������� ���� �i��.\n"
			<< "�i� ������ ������� �'�, ���������� i�����i���, �� ������ �����i���� ��� ����i�������." << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(3));
			std::cout << "\t 2) ����������i �� ��������i ������ ������� ��� �� ������ � 1610 ���i." << std::endl;
			std::this_thread::sleep_for(std::chrono::seconds(3));
			std::cout << "\t 3) ��� �������� ��� �����. ��� �i����� ���i������ - �������������, ��i �i��������� ��i���� i ������ ��������� \n"
			<< "������ �����i��� ����������� �������-�������� �������������, ����, �����������, ��������� �i����� �� i���� �������." << std::endl;
	}
	double drink_price(int const& cup_size, unsigned int const& sugar_quantity) const override
	{
		auto cup_size_ = static_cast<double>(cup_size);
		return 20.0 + (cup_size_ / 100) + sugar_quantity;
	}
};