#include <iostream>
#include "algorithm.hpp"

int main() {
    int n;
    std::cout << "Введите верхнюю границу: ";
    std::cin >> n;

    if (n > 1) { // Проверка на положительное значение
        sieveOfEratosthenes(n);
    } else {
        std::cout << "Пожалуйста, введите число больше 1." << std::endl;
    }

    return 0;
}

