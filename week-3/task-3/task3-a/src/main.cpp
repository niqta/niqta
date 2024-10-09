#include <iostream>
#include "max.hpp"

using namespace std;

int main() {
    const int SIZE = 6; // Размер массива
    double numbers[SIZE] = {1, 5, 10, 10, 12, -10}; // Пример массива
    double maxNumber;
    int count;

    findMaxCount(numbers, SIZE, maxNumber, count);

    // Вывод результата
    cout << "Количество чисел, равных максимальному (" << maxNumber << "): " << count << endl;

    return 0;
}





