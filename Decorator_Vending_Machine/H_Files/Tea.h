#pragma once
#include "Drink.h"
class Tea : public Drink {
public:
	void drink_preparing(std::string const& name, int const& cup_size, unsigned const& sugar_spoons) const override {
		boiling(name);
		if (sugar_spoons > 0)
			sugar_adding(sugar_spoons);
		placing_the_cup(cup_size);
		std::cout << "���� �������!" << std::endl;
	}
	void boiling(std::string const& name) const override
	{
		std::cout << "����� " << name << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "����� ������ ���..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "���'��� ����..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "�������� �����䳺���..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
	}
	void sugar_adding(unsigned int const& sugar_spoons_quantity) const override
	{
		std::cout << "����� " << sugar_spoons_quantity << " ����� �����." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
	}
	void placing_the_cup(int const& cup_size) const override
	{
		std::cout << "������ ������ ��'���� " << cup_size << " ��." << std::endl;
	}
};