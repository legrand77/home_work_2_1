#include <iostream>
#include <locale.h>
#include <cstdlib>

struct bank_account
{
        int account_number;
        std::string owner_name;
        double balance;
};
double changing_balance(bank_account* p, double n) {
    p->balance = n;
    return 0;
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    bank_account client;
    double new_balance;
    std::cout << "������� ����� ����� : ";
    std::cin >> client.account_number;
    std::cout << "������� ��� ���������: ";
    std::cin >> client.owner_name;
    std::cout << "������� ������: ";
    std::cin >> client.balance;
    std::cout << "������� ����� ������: ";
    std::cin >> new_balance;
    changing_balance(&client, new_balance);
    std::cout << "��� ����: " << client.owner_name << ", "
    << client.account_number << ", " << int(client.balance) << "."
    << int((client.balance - int(client.balance))*100) << std::endl;
    return EXIT_SUCCESS;
}

