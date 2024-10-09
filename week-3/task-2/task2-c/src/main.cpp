#include <iostream>
#include "algorithm.hpp"

int main() {
    int n;
    std::cout << "Введите верхнюю границу: ";
    std::cin >> n;

    sieveOfEratosthenes(n);
    return 0;
}



