#include <iostream>
#include <string>

struct Addresses
{
    std::string city;
    std::string street;
    int house_number;
    int apartment_number;
    int index;
};

void print_addresses(Addresses* p)
{
    std::cout << "Город: " << p->city << std::endl;
    std::cout << "Улица: " << p->street << std::endl;
    std::cout << "Номер дома: " << p->house_number << std::endl;
    std::cout << "Номер квартиры: " << p->apartment_number << std::endl;
    std::cout << "Индекс: " << p->index << std::endl;
}

int main()
{

    setlocale(LC_ALL, "Russian");

    std::string city_array[3] = { "Москва", "Владивосток", "Артём" };
    std::string street_array[3] = { "Пушкина", "Ленина", "Буянова" };
    int house_namber_array[3] = { 1, 2, 3 };
    int apartment_number_array[3] = { 102, 204, 306 };
    int index_array[3] = { 102098, 204765, 306432 };

    Addresses* location_array = new Addresses[3];

    for (int i = 0; i < 3; ++i)
    {
        location_array[i].city = city_array[i];
        location_array[i].street = street_array[i];
        location_array[i].house_number = house_namber_array[i];
        location_array[i].apartment_number = apartment_number_array[i];
        location_array[i].index = index_array[i];

        print_addresses(&location_array[i]);
        std::cout << std::endl;
    }

    delete[] location_array;


    return 0;
}
