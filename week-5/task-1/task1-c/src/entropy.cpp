#include "entropy.hpp"
#include <iostream>
#include <fstream>
#include <cmath>

void calculateShannonEntropy(const std::string &filename, const std::string &outputFile) {
    std::ifstream inputFile(filename, std::ios::binary);
    if (!inputFile) {
        std::cerr << "Ошибка: Не удалось открыть файл: " << filename << std::endl;
        return;
    }

    // Массив для хранения частоты байтов (256 символов)
    size_t frequency[256] = {0};
    size_t totalBytes = 0;
    char byte;

    // Чтение файла по частям для обработки больших файлов
    while (inputFile.get(byte)) {
        frequency[(unsigned char)byte]++;
        totalBytes++;
    }

    inputFile.close();

    if (totalBytes == 0) {
        std::cerr << "Ошибка: Файл пуст." << std::endl;
        return;
    }

    // Вычисление энтропии
    double entropy = 0.0;
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] > 0) {
            double probability = static_cast<double>(frequency[i]) / totalBytes;
            entropy -= probability * log2(probability);
        }
    }

    // Запись результата в файл
    std::ofstream outputFileStream(outputFile);
    if (!outputFileStream) {
        std::cerr << "Ошибка: Не удалось открыть файл для записи: " << outputFile << std::endl;
        return;
    }

    outputFileStream << "Энтропия по Шеннону: " << entropy << std::endl;
    outputFileStream.close();

    std::cout << "Энтропия по Шеннону: " << entropy << std::endl;
}

