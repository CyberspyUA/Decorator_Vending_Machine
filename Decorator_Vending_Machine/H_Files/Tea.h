#pragma once
#include "Drink.h"
class Tea : public Drink {
public:
	void prepare(std::string const& name, int const& cup_size, int const& sugar_spoons) const override {
		std::cout << "����� " << name << ", ������� � " << cup_size << " �� ��������� �� " << sugar_spoons << " ������� �����." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(5));
		std::cout << "Done!" << std::endl;
	}
};