#include <iostream>
#include <string>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    int number;
    int n;
    int result = 1;

    std::cout << "Введите целое число:";
    std::cin >> number;

    std::cout << "Введите степень (n):;";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        result = result * number;
    }

    std::cout << "Результат" << result << std::endl;

    return 0;
}