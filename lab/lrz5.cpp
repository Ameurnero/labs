#include <iostream>
#include <iomanip>
#include <bitset>

int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    long long decimal_number = 0; 
    std::cout << "Введите 10 число:";
    if(!(std::cin >> decimal_number)){
        std::cerr << "Надо ввести число!" << std::endl;
        return 1;
    }

    std::cout << "Двоичная:" << std::bitset<32>(decimal_number) << std::endl;
    std::cout << "Восьмиричная:" << std::oct << decimal_number << std::endl;

    std::cout << "Шестнадцатиричная:" << std::hex << std::uppercase << decimal_number << std::endl;

    return 0;
}
