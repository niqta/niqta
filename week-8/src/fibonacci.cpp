#include "fibonacci.hpp"
#include "logger.hpp"
#include <ctime>
#include <iostream>

// Глобальный кеш для оптимизированной версии
std::map<int, long long> cache;

long long classic(int n) {
    if (n <= 1) return n;
    return classic(n - 1) + classic(n - 2);
}

long long optimized(int n) {
    if (n <= 1) return n;

    // Проверка наличия в кеше
    if (cache.find(n) != cache.end()) {
        return cache[n];
    }

    // Вычисление и сохранение в кеше
    cache[n] = optimized(n - 1) + optimized(n - 2);
    return cache[n];
}

void measureTime(int n) {
    clock_t start, end;

    start = clock();
    long long classicResult = classic(n);
    end = clock();
    double classicDuration = double(end - start) / CLOCKS_PER_SEC;

    start = clock();
    long long optimizedResult = optimized(n);
    end = clock();
    double optimizedDuration = double(end - start) / CLOCKS_PER_SEC;

    // Логируем результаты
    Logger::info("Fibonacci(" + std::to_string(n) + ") = " + std::to_string(classicResult) + 
                 " (classic) in " + std::to_string(classicDuration) + " seconds");
    Logger::info("Fibonacci(" + std::to_string(n) + ") = " + std::to_string(optimizedResult) + 
                 " (optimized) in " + std::to_string(optimizedDuration) + " seconds");
}
