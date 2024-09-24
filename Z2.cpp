#include <iostream>
#include <limits> // Для получения границ типов данных

int main() {
    std::cout << "Информация о максимальных и минимальных значениях типов данных:" << std::endl;

    std::cout << "int:" << std::endl;
    std::cout << "Минимальное значение: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Максимальное значение: " << std::numeric_limits<int>::max() << std::endl;

    // int обычно занимает 4 байта (32 бита), что позволяет хранить целые числа от -2147483648 до 2147483647
    // Это связано с тем, что один бит используется для знака числа.

    std::cout << "float:" << std::endl;
    std::cout << "Минимальное значение: " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Максимальное значение: " << std::numeric_limits<float>::max() << std::endl;

    // float обычно занимает 4 байта и представляется в формате с плавающей запятой.
    // Это позволяет ему представлять множество значений с плавающей точкой в пределах разумных границ.

    std::cout << "double:" << std::endl;
    std::cout << "Минимальное значение: " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Максимальное значение: " << std::numeric_limits<double>::max() << std::endl;

    // double занимает 8 байт и обеспечивает большую точность и диапазон по сравнению с float,
    // что делает его пригодным для выполнения более сложных вычислений.

    return 0;
}

