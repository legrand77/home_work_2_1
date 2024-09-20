#include <iostream>
#include <locale.h>
#include <cstdlib>

struct address
{
    std::string name_city;
    std::string street_name;
    int house_number;
    int apartment_number;
    int index;
};

void structure_output(address* p) {
    std::cout << "Город: " << p->name_city << std::endl;
    std::cout << "Улица:  " << p->street_name << std::endl;
    std::cout << "Номер дома: " << p->house_number << std::endl;
    std::cout << "Номер квартиры: " << p->apartment_number << std::endl;
    std::cout << "Индекс: " << p->index << std::endl;
}
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    address address_house_1 = { "Москва", "Арбат",12,8,123456 };
    address address_house_2 = { "Ижевск", "Пушкина",59,143,953769 };
    structure_output(&address_house_1);
    std::cout << std::endl;
    structure_output(&address_house_2);
    return EXIT_SUCCESS;
}
