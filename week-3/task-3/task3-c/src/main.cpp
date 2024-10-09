#include <iostream>
#include <vector>
#include "median.hpp"

int main() {
    // Пример ввода
    std::vector<double> numbers = {3, 1, 4, 2};

    double median = findMedian(numbers);

    std::cout << "Медиана: " << median << std::endl;

    return 0;
}

