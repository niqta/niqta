#include <iostream>
#include <cstdlib>
#include <climits>
#include "converter.hpp"

void convertToInt(const char* input) {
    char* end;
    long value = std::strtol(input, &end, 10);
    
    if (*end != '\0') {
        std::cout << "Ошибка: '" << input << "' не может быть преобразовано в int." << std::endl;
    } else if (value < INT_MIN || value > INT_MAX) {
        std::cout << "Ошибка: значение '" << input << "' вне допустимого диапазона для int." << std::endl;
    } else {
        std::cout << "Преобразованное значение (int): " << static_cast<int>(value) << std::endl;
    }
}

void convertToFloat(const char* input) {
    char* end;
    float value = std::strtof(input, &end);
    
    if (*end != '\0') {
        std::cout << "Ошибка: '" << input << "' не может быть преобразовано в float." << std::endl;
    } else {
        std::cout << "Преобразованное значение (float): " << value << std::endl;
    }
}

void convertToDouble(const char* input) {
    char* end;
    double value = std::strtod(input, &end);
    
    if (*end != '\0') {
        std::cout << "Ошибка: '" << input << "' не может быть преобразовано в double." << std::endl;
    } else {
        std::cout << "Преобразованное значение (double): " << value << std::endl;
    }
}
