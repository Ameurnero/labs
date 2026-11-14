#include <iostream>
#include <string>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    int number;
    int n;
    int result = 1;

    std::cout << "Введите целое число: ";
    
    if (!(std::cin >> number)) {
        std::cerr << "Ошибка: Вы ввели некорректные символы вместо числа!" << std::endl;
        return 1;
    }

    std::cout << "Введите степень (n): ";
    
    if (!(std::cin >> n)) {
        std::cerr << "Ошибка: Степень должна быть целым числом!" << std::endl;
        return 1;
    }

    
    if (n < 0) {
        std::cerr << "Ошибка: Степень не должна быть отрицательной!" << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        result = result * number;
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
