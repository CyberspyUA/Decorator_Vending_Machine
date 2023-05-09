#pragma once
#include "Drink.h"
#include <memory>
class DrinkDecorator : public Drink {
private:
    std::shared_ptr<Drink> m_drink;
public:
    explicit DrinkDecorator(std::shared_ptr<Drink> drink) : m_drink(drink) {};

    void drink_preparing(std::string const& drink_name, int const& cup_size, unsigned const& sugar_quantity) const override
    {
        m_drink->drink_preparing(drink_name, cup_size, sugar_quantity);
    }

    void boiling(std::string const& drink_name) const override
    {
        m_drink->boiling(drink_name);
        std::cout << drink_name << " заварено!" << std::endl;
    }

    void placing_the_cup(int const& cup_size) const override
    {
        m_drink->placing_the_cup(cup_size);
        std::cout << "Наливаю напій у стакан розміром " << cup_size << std::endl;
    }
    void sugar_adding(unsigned const& sugar_quantity) const override
    {
        return m_drink->sugar_adding(sugar_quantity);
        std::cout << "Цукор додано!" << std::endl;
    }
};