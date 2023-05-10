#pragma once
#include "Cacao.h"
#include "Tea.h"
#include "Coffee.h"
#include "Coffee_Decorator.h"
#include "Tea_Decorator.h"
#include "Cacao_Decorator.h"
#include <string>
class VendingMachine {
public:
	void makeDrink(std::string const& name, int const& cup_size, int const& sugar_spoons, int const& drink_choice) const;
	bool sugar_suggestion() const;
	int cup_suggestion() const;
	int sugar_adding() const;
	void drink_options_show() const;
	void cacao_options_show() const;
	void tea_options_show() const;
	void coffee_options_show() const;
	void manual_show() const;
	void introduction_show() const;
};