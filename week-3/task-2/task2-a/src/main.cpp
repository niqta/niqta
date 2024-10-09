#include <iostream>
#include "pyramid.hpp"

int main() {
    int height;

    std::cout << "Введите высоту пирамиды: ";
    std::cin >> height;

    printPyramid(height);

    return 0;
}




