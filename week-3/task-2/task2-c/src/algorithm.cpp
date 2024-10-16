#include "algorithm.hpp"
#include <iostream>

void sieveOfEratosthenes(int n) {
    std::cout << "Простые числа до " << n << ":\n";

    // Проверяем каждое число от 2 до n
    for (int num = 2; num <= n; num++) {
        bool isPrime = true; // Предполагаем, что num простое

        // Проверяем делимость num на все числа от 2 до sqrt(num)
        for (int divisor = 2; divisor * divisor <= num; divisor++) {
            if (num % divisor == 0) {
                isPrime = false; // num составное
                break; // Выходим из цикла, если нашли делитель
            }
        }
        
        // Если число простое, выводим его
        if (isPrime) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}


