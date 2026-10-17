#include <iostream>
#include <iomanip>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    double weight = 0.0;
    double height = 0.0;

    std::cout << "Вес:";
    std::cin >> weight;

    std::cout << "Рост:";
    std::cin >> height;

    double bmi = weight / (height * height);

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Индекс массы тела:" << bmi << std::endl;

    return 0;
}
