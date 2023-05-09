#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
class Drink {
public:
	virtual ~Drink() = default;
	virtual void boiling(std::string const&) const = 0;
	virtual void placing_the_cup(int const&) const = 0;
	virtual void sugar_adding(unsigned int const&) const = 0;
	virtual void drink_preparing(std::string const&, int const&, unsigned int const&) const = 0;
	virtual double drink_price(int const&, unsigned int const&) const = 0;
	virtual double sugar_price(unsigned int const&) const = 0;
};