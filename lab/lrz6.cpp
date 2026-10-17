#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    std::string text;
    std::cout << "Введите строку:";
    std::getline(std::cin, text);

    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int punctuation = 0;

    for (char c : text) {
       if (std::isalpha(static_cast<unsigned char>(c))) {
            letters++;
        } else if (std::isdigit(static_cast<unsigned char>(c))) {
            digits++;
        } else if (std::isspace(static_cast<unsigned char>(c))) {
            spaces++;
        } else if (std::ispunct(static_cast<unsigned char>(c))) {
            punctuation++;
        }
    }
    
    std::cout << "Буквы" << letters << std::endl;
    std::cout << "Цифры" << digits << std::endl;
    std::cout << "Пробелы" << spaces << std::endl;
    std::cout << "Знаки препинания" << punctuation << std::endl;

    return 0;
}