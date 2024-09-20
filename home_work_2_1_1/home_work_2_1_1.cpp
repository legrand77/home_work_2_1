#include <iostream>
enum class month
{   zero,
	January,
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
	December
};
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	month s{};
	do {
		int numer{};
		std::cout << "Введите номер месяца:  ";
		std::cin >> numer;
		s = static_cast<month>(numer);
		if (s == month::January) {
			std::cout << "Январь" << std::endl;
		}
		if (s == month::February) {
			std::cout << "Февраль" << std::endl;
		}
		if (s == month::March) {
			std::cout << "Март" << std::endl;
		}
		if (s == month::April) {
			std::cout << "Апрель" << std::endl;
		}
		if (s == month::May) {
			std::cout << "Май" << std::endl;
		}
		if (s == month::June) {
			std::cout << "Июнь" << std::endl;
		}
		if (s == month::July) {
			std::cout << "Июль" << std::endl;
		}
		if (s == month::August) {
			std::cout << "Август" << std::endl;
		}
		if (s == month::September) {
			std::cout << "Сентябрь" << std::endl;
		}
		if (s == month::October) {
			std::cout << "Октябрь" << std::endl;
		}
		if (s == month::November) {
			std::cout << "Ноябрь" << std::endl;
		}
		if (s == month::December) {
			std::cout << "Декабрь" << std::endl;
		}
		if (s > month::December || s < month::zero) {
			std::cout << "Неправильный номер!" << std::endl;
		}
	}
	while (s != month::zero);
	std::cout << "До свидания" << std::endl;

	return 0;
}
