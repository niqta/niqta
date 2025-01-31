#include "fibonacci.hpp"
#include "logger.hpp"

int main() {
    // Инициализация логгера
    Logger::init();
    Logger::info("Starting Fibonacci calculation...");

    for (int n = 0; n <= 40; n += 5) {
        measureTime(n);
    }

    Logger::info("Fibonacci calculation completed.");
    return 0;
}
