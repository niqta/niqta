#include <iostream>
#include <string>
#include "Utils.hpp"

int main() {
    std::string input;

    // Ввод строки
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    // Обработка строки
    std::string output = removeConsecutiveDuplicates(input);

    // Вывод результата
    std::cout << "Результат: " << output << std::endl;

    return 0;
}
