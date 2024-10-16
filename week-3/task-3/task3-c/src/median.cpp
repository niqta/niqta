#include <algorithm>
#include "median.hpp"

// Функция для вычисления медианы
double calculateMedian(const std::vector<double>& numbers) {
    size_t size = numbers.size();
    if (size % 2 == 0) {
        // Если количество элементов четное
        return computeMedian(numbers[size / 2 - 1], numbers[size / 2]);
    } else {
        // Если количество элементов нечетное
        return numbers[size / 2];
    }
}

// Функция для нахождения медианы
double findMedian(std::vector<double>& numbers) {
    std::sort(numbers.begin(), numbers.end()); // Сортируем массив
    return calculateMedian(numbers); // Вычисляем медиану
}

double computeMedian(double a, double b) {
    return (a + b) / 2.0; // Среднее между a и b
}


