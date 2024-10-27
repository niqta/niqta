#include <iostream>
#include <fstream>
#include <string>
#include "file.hpp"

void readFile(const std::string& filename) {
    std::ifstream file(filename);

    if (!file) {
        std::cerr << "Ошибка при открытии файла!" << std::endl;
        return; // Завершаем выполнение функции при ошибке
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl; // Выводим каждую строку сразу
    }

    file.close(); // Закрываем файл
}

