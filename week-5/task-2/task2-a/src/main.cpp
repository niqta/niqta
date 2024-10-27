#include <iostream>
#include <cstring>
#include "converter.hpp"

int main() {
    char input[256];
    int choice;

    std::cout << "Введите сообщение для преобразования: ";
    std::cin.getline(input, 256);

    std::cout << "Выберите тип для преобразования:\n";
    std::cout << "1. int\n";
    std::cout << "2. float\n";
    std::cout << "3. double\n";
    std::cout << "Ваш выбор (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            convertToInt(input);
            break;
        case 2:
            convertToFloat(input);
            break;
        case 3:
            convertToDouble(input);
            break;
        default:
            std::cout << "Ошибка: неверный выбор." << std::endl;
            break;
    }

    return 0;
}
