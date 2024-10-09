#include <iostream>
#include "pyramid.hpp"

void printPyramid(int height) {
    for (int i = 1; i <= height; ++i) {
        // Вывод пробелов для выравнивания
        for (int j = 1; j <= height - i; ++j) {
            std::cout << " ";
        }

        // Вывод левой стороны пирамиды
        for (int k = 1; k <= i; ++k) {
            std::cout << "#";
        }

        // Вывод пробела между двумя сторонами
        std::cout << " ";

        // Вывод правой стороны пирамиды
        for (int k = 1; k <= i; ++k) {
            std::cout << "#";
        }

        // Переход на новую строку
        std::cout << std::endl;
    }
}




