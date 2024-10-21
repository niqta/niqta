#include "entropy.hpp"
#include <cmath>

double calculateShannonEntropy(const std::string &input) {
    int frequency[256] = {0}; // Массив для частоты символов
    int totalCharacters = 0;

    // Подсчет частоты каждого символа
    for (char c : input) {
        frequency[(unsigned char)c]++;
        totalCharacters++;
    }

    // Вычисление энтропии
    double entropy = 0.0;
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] > 0) {
            double probability = static_cast<double>(frequency[i]) / totalCharacters;
            entropy -= probability * log2(probability);
        }
    }

    return entropy;
}
