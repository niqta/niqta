#include <iostream>
#include <fstream>
#include "entropy.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Использование: " << argv[0] << " text.txt" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Не удалось открыть файл " << filename << std::endl;
        return 1;
    }

    int frequency[256] = {0}; // маска для символов
    std::string text((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();

    int totalChars = text.size();

    // Считаем частоту каждого символа
    for (char c : text) {
        frequency[static_cast<int>(c)]++;
    }

    double entropy = calculateEntropy(frequency, totalChars);
    std::cout << "Энтропия по Шеннону: " << entropy << std::endl;

    return 0;
}
