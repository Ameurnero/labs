#include <iostream>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    int current = 0;
    int sum = 0;

    std::cout << "Введите правую границу диапазона (n):";
    if(!(std::cin >> n)) {
        std::cerr << "Ошибка: граница должна быть числом большим 0!" << std::endl;

        return 1;
    }

    if(n<0){
        std::cerr << "Ошибка: граница должна быть числом большим 0!" << std::endl;

        return 1;
    }

    while (current <= n) {
        if (abs(current) % 5 == 0) {
            sum = sum +current;
        }

        current = current + 1;
    }

    std::cout << "Сумма чисел, делящихся на 5 в диапазоне от 0 до" << n << "равна" << sum << std::endl;

    return 0;

}