#include <iostream>
#include <ctime>
#include <fstream>  // Для логирования
#include "../include/fibonacci.hpp"

using namespace std;

// Функция для логирования результатов
void logResult(const string& message) {
    ofstream logFile("fibonacci_log.txt", ios::app);
    if (logFile.is_open()) {
        logFile << message << endl;
        logFile.close();
    } else {
        cerr << "Unable to open log file" << endl;
    }
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

    // Формирование сообщений
    string classicMessage = "Fibonacci(" + to_string(n) + ") = " + to_string(classicResult) + " (classic) in " + to_string(classicDuration) + " seconds";
    string optimizedMessage = "Fibonacci(" + to_string(n) + ") = " + to_string(optimizedResult) + " (optimized) in " + to_string(optimizedDuration) + " seconds";

    // Вывод на консоль
    cout << classicMessage << endl;
    cout << optimizedMessage << endl;

    // Логирование в файл
    logResult(classicMessage);
    logResult(optimizedMessage);
}

int main() {
    for (int n = 0; n <= 40; n += 5) {
        measureTime(n);
    }
    return 0;
}

