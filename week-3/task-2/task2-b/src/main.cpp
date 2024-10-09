#include <iostream>
#include "heron.hpp"

int main() {
    double number;

    std::cout << "Введите неотрицательное число: ";
    std::cin >> number;

    double sqrtValue = heronSqrt(number);
    
    if (sqrtValue >= 0)
        std::cout << "Квадратный корень из " << number << " равен " << sqrtValue << std::endl;

    return 0;
}


