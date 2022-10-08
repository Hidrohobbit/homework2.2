#include <iostream>

enum class months
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};

int main()
{
    setlocale(LC_ALL, "Russian");

    int ch_m = 0;
    
    
    do
    {
        std::cout << "Введите номер месяца: ";
        std::cin >> ch_m;
        months m = static_cast<months>(ch_m);

        switch (m)
        {
        case months::January:
            std::cout << "Январь";
            break;
        case months::February:
            std::cout << "Февраль";
            break;
        case months::March:
            std::cout << "Март";
            break;
        case months::April:
            std::cout << "Апрель";
            break;
        case months::May:
            std::cout << "Май";
            break;
        case months::June:
            std::cout << "Июнь";
            break;
        case months::July:
            std::cout << "Июль";
            break;
        case months::August:
            std::cout << "Август";
            break;
        case months::September:
            std::cout << "Сентябрь";
            break;
        case months::October:
            std::cout << "Октябрь";
            break;
        case months::November:
            std::cout << "Ноябрь";
            break;
        case months::December:
            std::cout << "Декабрь";
            break;
        }
        
        std::cout << std::endl;

    } while (ch_m >= 1 && ch_m <= 12);

    if (ch_m == 0)
    {
        std::cout << "Выход!" << std::endl;
    }
    else
    {
        std::cout << "!!!Нет такого месяца!!!" << std::endl;
    }

}