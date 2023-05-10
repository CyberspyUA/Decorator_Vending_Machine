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
    std::cout << "����� ����i���?\n";
    std::cout << "1 - ���, 0 - �i \n";
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
        std::cout << "\t����i�� ����i� ������� ����� ��������������:\n"
            << "1) 100 ��\n"
            << "2) 200 ��\n"
            << "3) 300 ��\n"
            << "4) 400 ��\n"
            << "5) 500 ��\n";
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
            std::cout << "������� �� ��������� ��������. ��������� �� ���.\n";
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
        std::cout << "����� ���������? " << "����� ����� - " << new_sugar_spoons_count << "\n";
        std::cout << "1 - ���, 0 - �i" << "\n";
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
            std::cout << "������� ���i��� ��������. ��������� �� ���.";
        }
    }
}
void VendingMachine::drink_options_show() const
{
    std::cout << "1)����:\t 2)���\t 3)�����"
        << "  *���������\t  *������\t  *����i������\n"
        << "  *���������\t  *�������\t  *�����\n"
        << "  *������i��\t  *��������\t  *������� �������\n";
}
void VendingMachine::cacao_options_show() const
{
    std::cout
        << "  1)����i������\n"
        << "  2)�����\n"
        << "  3)������� �������\n";

}
void VendingMachine::tea_options_show() const
{
    std::cout
        << "  1)������\n"
        << "  2)�������\n"
        << "  3)��������\n";
}
void VendingMachine::coffee_options_show() const
{
    std::cout
        << "  1)���������\n"
        << "  2)���������\n"
        << "  3)������i��\n";
}

void VendingMachine::manual_show() const
{

    std::cout << "\t ���� �����, ����i�� � ����i����� ����� �i� 1 �� 4.\n"
        << "\t �������i ���i����:\n"
        << "1) ������ ���i�\n"
        << "2) �������� ��i ����\n"
        << "3) �������� ���� ���i���\n"
        << "4) ����� � ��������� ��������.\n";
}
void VendingMachine::introduction_show() const
{
    std::cout << "\t\t�i��� �������� ��i����! \n"
        << "\t �� ���i���� ��������� �������� ������i� Struk.corp\n"
        << "\t � ����� ��� ���� �����. �� ������ ������� ���� � ��� ��� �i��������� �� �������� �������.\n"
        << "\t ���� ���i� ���� ������, � ������ �������� ����.\n"
        << "\t ��������� ���� ������ ����� �� �����.\n"
        << "\t ���� � ��� ���������� �������, �� ������ �i�������� �� ���i��������, �������� ����� 3\n";
}
