#include <iostream>
#include <string>

struct bank_account
{
    int account_number;
    int money_count;
    std::string owners_name;
    

};

int main()
{
    setlocale(LC_ALL, "Russian");

    bank_account first_account;

    std::cout << "Введите номер счёта: ";
    std::cin >> first_account.account_number;
    std::cout << std::endl;

    std::cout << "Введите имя владельца: ";
    std::cin >> first_account.owners_name;
    std::cout << std::endl;

    std::cout << "Введите баланс: ";
    std::cin >> first_account.money_count;
    std::cout << std::endl;

    std::cout << "Введите новый баланс: ";


    bank_account* point_first_account = &first_account;
    std::cin >> point_first_account -> money_count;
    std::cout << std::endl;


    std::cout << "Ваш счёт: " << first_account.owners_name << "  " << first_account.account_number << "  " << first_account.money_count << std::endl;

    return 0;
}

