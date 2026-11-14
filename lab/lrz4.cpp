#include <iostream>
#include <iomanip>

int main() {
 std::setlocale(LC_ALL, "ru_RU.UTF-8");

 double weight = 0.0;
 double height = 0.0;

 std::cout << "Вес(в кг):";
 if(!(std::cin >> weight)){
 std::cerr << "Вес должен быть равен числу!!" << std::endl;
 return 1;
 }

 std::cout << "Рост(в метрах):";
 if(!(std::cin >> height)){
 std::cerr << "И рост тоже должен быть числом!!" << std::endl;
 return 1;
 }

 double bmi = weight / (height * height);

 std::cout << std::fixed << std::setprecision(1);
 std::cout << "Индекс массы тела:" << bmi << std::endl;

 return 0;
}
