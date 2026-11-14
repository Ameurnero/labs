#include <iostream>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    int current_day = 0, current_month = 0, current_year = 0;

    std::cout << "Текущий день: ";
    if (!(std::cin >> current_day) || current_day < 1 || current_day > 31) {
        std::cerr << "Ошибка: некорректный день!" << std::endl;
        return 1;
    }

    std::cout << "Текущий месяц: ";
    if (!(std::cin >> current_month) || current_month < 1 || current_month > 12) {
        std::cerr << "Ошибка: некорректный месяц!" << std::endl;
        return 1;
    }

    std::cout << "Текущий год: ";
    if (!(std::cin >> current_year) || current_year < 1900 || current_year > 2026) {
        std::cerr << "Ошибка: некорректный год!" << std::endl;
        return 1;
    }

    int birth_day = 0, birth_month = 0, birth_year = 0;

    std::cout << "День рождения: ";
    if (!(std::cin >> birth_day) || birth_day < 1 || birth_day > 31) {
        std::cerr << "Ошибка: некорректный день рождения!" << std::endl;
        return 1;
    }

    std::cout << "Месяц рождения: ";
    if (!(std::cin >> birth_month) || birth_month < 1 || birth_month > 12) {
        std::cerr << "Ошибка: некорректный месяц рождения!" << std::endl;
        return 1;
    }

    std::cout << "Год рождения: ";
    if (!(std::cin >> birth_year) || birth_year < 1900 || birth_year > current_year) {
        std::cerr << "Ошибка: некорректный год рождения!" << std::endl;
        return 1;
    }

    int age = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    if (age < 0) {
        std::cerr << "Ошибка: дата рождения еще не наступила!" << std::endl;
        return 1;
    }

    std::cout << "Возраст: " << age << std::endl;

    return 0;
}
