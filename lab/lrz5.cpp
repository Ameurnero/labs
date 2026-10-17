#include <iostream>
#include <iomanip>
#include <bitset>

int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    int decimal_number = 0;
    std::cout << "Введите 10 число:";
    std::cin >> decimal_number;

    std::cout << "Двоичная:" << std::bitset<16>(decimal_number) << std::endl;
    std::cout << "Восьмиричная:" << std::oct << decimal_number << std::endl;

    std::cout << "Шестнадцатиричная:" << std::hex << std::uppercase << decimal_number << std::endl;

    return 0;
}