#include <iostream>
#include <clocale>
#include <string>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    std::string text;
    int k,m;

    std::cout <<  "Введите текст:";
    std::getline(std::cin, text);

    std::cout << "Введите порядковый номер (k):";
    std::cin >> k;

    std::cout << "буква под номером " << k << " — это: " << text[k - 1] << std::endl;


    std::cout << "Введите второй порядковый номер (m): ";
    std::cin >> m;

    std::cout << "Текст в диапазоне от " << k << " до " << m << ": ";
    
    for (int i = k - 1; i <= m - 1; ++i) {
        std::cout << text[i];
    }
    std::cout << std::endl; 

    return 0;
}

