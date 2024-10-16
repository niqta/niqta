#include "heron.hpp"
#include <iostream>
#include <cmath>

double heronFormula(double guess, double number) {
    return (guess + number / guess) / 2.0;
}

double heronSqrt(double number) {
    // Если число отрицательное, возвращаем NaN
    if (number < 0) {
        return std::nan("Неопределённый корень"); // Возвращаем NaN для отрицательного числа
    }
    // Если число равно 0, возвращаем 0
    if (number == 0) return 0;

    double guess = number; // Начальное приближение
    double previousGuess;

    do {
        previousGuess = guess;
        guess = heronFormula(guess, number); // Используем отдельную функцию
    } while (fabs(guess - previousGuess) > 1e-6); // Условие выхода

    return guess;
}
