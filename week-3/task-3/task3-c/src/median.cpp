#include <algorithm>
#include "median.hpp"

// Функция для вычисления медианы
double calculateMedian(double numbers[], int size) {
    if (size % 2 == 0) {
        // Если количество элементов четное
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    } else {
        // Если количество элементов нечетное
        return numbers[size / 2];
    }
}

// Функция для нахождения медианы
double findMedian(double numbers[], int size) {
    // Сортируем массив
    std::sort(numbers, numbers + size); // Сортируем массив
    return calculateMedian(numbers, size); // Вычисляем медиану
}


