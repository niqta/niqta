#include <iostream>
#include "median.hpp"

int main() {
    // Пример ввода
    double numbers[] = {3.5, 1.2, 4.8, 2.9};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Определяем размер массива

    double median = findMedian(numbers, size);

    std::cout << "Медиана: " << median << std::endl;

    return 0;
}


