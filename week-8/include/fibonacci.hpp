#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

#include <map>

// Объявления функций
long long classic(int n);
long long optimized(int n);

// Глобальный кеш для оптимизированной версии
extern std::map<int, long long> cache;

#endif // FIBONACCI_HPP

