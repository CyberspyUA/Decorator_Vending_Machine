#include <iostream>
#include <string>
#include <memory>
#include "H_Files/Vending_Machine.h"
bool choosing_a_drink(int drink_choice, const VendingMachine& vendingMachine);
int main() {
    VendingMachine vendingMachine;
    setlocale(0, ".1251");
    bool terminate_program{};
    while (!terminate_program)
    {
        vendingMachine.introduction_show();
        vendingMachine.manual_show();
        int menu_choice{};
        std::cin >> menu_choice;
        std::cout << "\n";
        switch (menu_choice)
        {
        case 1:
        {
            vendingMachine.drink_options_show();
            std::cout << "Чудово! Який напiй ви бажаєте спробувати?\n";
            int drink_choice{};
            std::cin >> drink_choice;
            terminate_program = choosing_a_drink(drink_choice, vendingMachine);
            break;
        }
        case 2:
        {
            vendingMachine.drink_options_show();
            break;
        }
        case 3:
        {
            vendingMachine.manual_show();
            break;
        }
        default:
        {
            break;
        }
        }
    }
    return 0;
}
bool choosing_a_drink(int drink_choice, const VendingMachine& vendingMachine)
{

    int spoons_quantity{};
    bool sugar_choice{ vendingMachine.sugar_suggestion() };
    if (sugar_choice)
    {
        spoons_quantity = vendingMachine.sugar_adding();
    }
    if (drink_choice == 1)
    {
        vendingMachine.coffee_options_show();
        int coffee_choice{};
        std::cin >> coffee_choice;
        if (coffee_choice == 1)
        {
            std::string drink_name{ "Есспрессо" };

            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
        else if (coffee_choice == 2)
        {
            std::string drink_name{ "Американо" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
        else if (coffee_choice == 3)
        {

            std::string drink_name{ "Каппучiно" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
    }
    else if (drink_choice == 2)
    {
        vendingMachine.tea_options_show();
        int tea_choice{};
        std::cin >> tea_choice;
        if (tea_choice == 1)
        {
            std::string drink_name{ "Чорний чай" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
        else if (tea_choice == 2)
        {
            std::string drink_name{ "Зелений чай" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
        else if (tea_choice == 3)
        {

            std::string drink_name{ "Червоний чай" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
    }
    else if (drink_choice == 3)
    {
        vendingMachine.cacao_options_show();
        int cacao_choice{};
        std::cin >> cacao_choice;
        if (cacao_choice == 1)
        {
            std::string drink_name{ "Оригiнальне какао" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
        else if (cacao_choice == 2)
        {
            std::string drink_name{ "Пряне какао" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
        else if (cacao_choice == 3)
        {

            std::string drink_name{ "Гарячий шоколад" };
            int cup_size{ vendingMachine.cup_suggestion() };
            vendingMachine.makeDrink(drink_name, cup_size, spoons_quantity, drink_choice);
            return true;
        }
    }
    else
    {
        std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
        return false;
    }
    return false;
}