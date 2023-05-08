#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
class Drink {
public:
	virtual ~Drink() = default;
	void prepare(std::string const&, int const&, int const&) const;
};