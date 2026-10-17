#include <iostream>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    int current_day = 0;
    int current_month = 0;
    int current_year = 0;

    std::cout << "День";
    std::cin >> current_day;

    std::cout << "Месяц";
    std::cin >> current_month;

    std::cout << "Year";
    std::cin >> current_year;

    int birth_day = 0;
    int birth_month = 0;
    int birth_year = 0;

    std::cout << "day birth";
    std::cin >> birth_day;

    std::cout << "month birth";
    std::cin >> birth_month;

    std::cout << "year birth";
    std::cin >> birth_year;

    int age = current_year - birth_year;

    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }

    std::cout << "age" << age << std::endl;

    return 0;
}
