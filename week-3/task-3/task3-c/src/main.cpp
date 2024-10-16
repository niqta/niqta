#include <iostream>
#include <vector>
#include "median.hpp"

int main() {
    std::vector<double> numbers = {3.5, 1.2, 4.8, 2.9};

    double median = findMedian(numbers);

    std::cout << "Медиана: " << median << std::endl;

    return 0;
}


