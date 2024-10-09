#include "max.hpp"

void findMaxCount(const double* numbers, int size, double& maxNumber, int& count) {
    maxNumber = numbers[0];
    count = 0;

    // Поиск максимального значения
    for (int i = 0; i < size; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Подсчет вхождений максимального значения
    for (int i = 0; i < size; i++) {
        if (numbers[i] == maxNumber) {
            count++;
        }
    }
}






