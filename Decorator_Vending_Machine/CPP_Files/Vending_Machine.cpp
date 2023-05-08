#include <iostream>
#include "../H_Files/Vending_Machine.h"
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