#include <iostream>
#include <string>
#include "string.hpp"

const int MAX_STRINGS = 100; // Максимальное количество строк

int main() {
    std::string searchStr;
    std::cout << "Что ищем: ";
    std::cin >> searchStr;

    std::string strings[MAX_STRINGS];
    int numStrings = 0;

    std::cout << "Где ищем:\n";
    std::cin.ignore(); // Очищаем буфер ввода
    while (numStrings < MAX_STRINGS) {
        std::string input;
        std::getline(std::cin, input);
        if (input.empty()) break; // Завершение ввода при пустой строке
        strings[numStrings++] = input;
    }

    int result = countOccurrences(searchStr, strings, numStrings);
    std::cout << "Вывод: " << result << std::endl;

    return 0;
}



