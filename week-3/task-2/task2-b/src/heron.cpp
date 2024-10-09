#include "heron.hpp"
#include <cmath>
#include <iostream>

double heronFormula(double guess, double number) {
    return (guess + number / guess) / 2.0;
}

double heronSqrt(double number) {
    if (number < 0) {
        std::cerr << "Некорректное значение: число должно быть неотрицательным." << std::endl;
        return -1;
    }
    if (number == 0) return 0;

    double guess = number; // Начальное приближение
    double previousGuess;

    do {
        previousGuess = guess;
        guess = heronFormula(guess, number); // Используем отдельную функцию
    } while (fabs(guess - previousGuess) > 1e-6); // Условие выхода

    return guess;
}


