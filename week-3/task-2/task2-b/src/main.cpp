#include <iostream>
#include "heron.hpp"
#include <cmath>

int main() {
    double number;

    std::cout << "Введите число: ";
    std::cin >> number;

    double sqrtValue = heronSqrt(number);
    
    if (std::isnan(sqrtValue)) {
        std::cerr << "Ошибка: квадратный корень из отрицательного числа не определён." << std::endl;
    } else {
        std::cout << "Квадратный корень из " << number << " равен " << sqrtValue << std::endl;
    }

    return 0;
}
