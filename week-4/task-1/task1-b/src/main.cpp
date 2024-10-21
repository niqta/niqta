#include <iostream>
#include <string>
#include "entropy.hpp"

int main() {
    std::string input;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input);

    if (input.empty()) {
        std::cout << "Ошибка: строка не может быть пустой!" << std::endl;
        return 1; // Завершение программы с ошибкой
    }

    double entropy = calculateShannonEntropy(input);
    
    // Форматирование вывода до двух знаков после запятой
    std::cout << "Энтропия: " 
              << static_cast<int>(entropy * 100) / 100.0 
              << std::endl;

    return 0;
}



