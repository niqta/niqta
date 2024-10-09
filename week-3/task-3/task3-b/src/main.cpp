#include <iostream>
#include "sort.hpp"

int main() {
    double arr[] = {20, 27, 40, 12, 7, 80, 10}; // Пример массива
    int arrSize = sizeof(arr) / sizeof(arr[0]); // Определяем размер массива

    std::cout << "Исходный массив: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sortArray(arr, arrSize); // Вызов функции сортировки

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < arrSize; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



