#include "algorithm.hpp"
#include <iostream>

void sieveOfEratosthenes(int n) {
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // Устанавливаем 0 и 1 как составные числа.

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            // Помечаем все кратные p как составные числа.
            for (int multiple = p * p; multiple <= n; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }

    std::cout << "Простые числа до " << n << ":\n";
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            std::cout << p << " ";
        }
    }
    std::cout << std::endl;
}



