#include <iostream>
#include "../H_Files/Vending_Machine.h"
void VendingMachine::makeDrink(std::string const& name, int const& cup_size, int const& sugar_spoons, int const& drink_choice) const {
    if (drink_choice == 1)
    {
        std::shared_ptr<Drink> coffee = std::make_shared<Coffee>();
        coffee = std::make_shared<Coffee_Decorator>(coffee);
        coffee->drink_preparing(name, cup_size, sugar_spoons);
        return;
    }

    else if (drink_choice == 2)
    {
        std::shared_ptr<Drink> tea = std::make_shared<Tea>();
        tea = std::make_shared<Tea_Decorator>(tea);
        tea->drink_preparing(name, cup_size, sugar_spoons);
        return;
    }

    else if (drink_choice == 3)
    {
        std::shared_ptr<Drink> cacao = std::make_shared<Cacao>();
        cacao = std::make_shared<Cacao_Decorator>(cacao);
        cacao->drink_preparing(name, cup_size, sugar_spoons);
        return;
    }

}
bool VendingMachine::sugar_suggestion() const
{
    bool is_sugar_needed{};
    std::cout << "Цукор потрiбен?\n";
    std::cout << "1 - так, 0 - нi \n";
    std::cin >> is_sugar_needed;
    if (is_sugar_needed == 1 || is_sugar_needed == 0)
        return is_sugar_needed;
    else
        return false;
}
int VendingMachine::cup_suggestion() const
{
    while (true)
    {
        int cup_choice{};
        std::cout << "\tОберiть розмiр стакану серед запропонованих:\n"
            << "1) 100 мл\n"
            << "2) 200 мл\n"
            << "3) 300 мл\n"
            << "4) 400 мл\n"
            << "5) 500 мл\n";
        std::cin >> cup_choice;
        switch (cup_choice)
        {
        case 1:
            return 100;
        case 2:
            return 200;
        case 3:
            return 300;
        case 4:
            return 400;
        case 5:
            return 500;
        default:
        {
            std::cout << "Введено не корректне значення. Спробуйте ще раз.\n";
            break;
        }
        }
    }
}
int VendingMachine::sugar_adding() const
{
    int new_sugar_spoons_count{ 1 };
    while (true)
    {
        std::cout << "Цього достатньо? " << "Ложок цукру - " << new_sugar_spoons_count << "\n";
        std::cout << "1 - так, 0 - нi" << "\n";
        int choice{};
        std::cin >> choice;
        if (choice == 1)
        {
            return new_sugar_spoons_count;
        }
        else if (choice == 0)
        {
            new_sugar_spoons_count++;
            continue;
        }
        else
        {
            std::cout << "Введено невiрне значення. Спробуйте ще раз.";
        }
    }
}
void VendingMachine::drink_options_show() const
{
    std::cout << "1)Кава:\t 2)Чай\t 3)Какао"
        << "  *Есспрессо\t  *Чорний\t  *Оригiнальне\n"
        << "  *Американо\t  *Зелений\t  *Пряне\n"
        << "  *Каппучiно\t  *Червоний\t  *Гарячий шоколад\n";
}
void VendingMachine::cacao_options_show() const
{
    std::cout
        << "  1)Оригiнальне\n"
        << "  2)Пряне\n"
        << "  3)Гарячий шоколад\n";

}
void VendingMachine::tea_options_show() const
{
    std::cout
        << "  1)Чорний\n"
        << "  2)Зелений\n"
        << "  3)Червоний\n";
}
void VendingMachine::coffee_options_show() const
{
    std::cout
        << "  1)Есспрессо\n"
        << "  2)Американо\n"
        << "  3)Каппучiно\n";
}

void VendingMachine::manual_show() const
{

    std::cout << "\t Будь ласка, введiть з клавiатури число вiд 1 до 4.\n"
        << "\t Доступнi варiанти:\n"
        << "1) Обрати напiй\n"
        << "2) Показати всi напої\n"
        << "3) Показати меню довiдки\n"
        << "4) Вийти з торгового автомата.\n";
}
void VendingMachine::introduction_show() const
{
    std::cout << "\t\tВiтаю шановний клiєнте! \n"
        << "\t Це помiчник торгового автомата компанiї Struk.corp\n"
        << "\t Я надам вам меню напоїв. Ви можете вибрати один з них або вiдмовитися та полишити додаток.\n"
        << "\t Коли напiй буде обрано, я одразу приготую його.\n"
        << "\t Додатково можу подати цукор до напою.\n"
        << "\t Якщо у вас залишилися питання, ви можете вiдтворити це повiдомлення, набравши цифру 3\n";
}
