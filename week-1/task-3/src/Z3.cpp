#include <iostream>
#include <cmath> // Для функции sqrt

// Функция для вычисления объема икосаэдра
double calculateIcosahedronVolume(double edgeLength) {
    return (5.0 / 12.0) * (3.0 + sqrt(5.0)) * pow(edgeLength, 3);
}

int main() {
    double a;
    std::cout << "Введите длину ребра икосаэдра: ";
    std::cin >> a;

    // Вызываем функцию для вычисления объема
    double volume = calculateIcosahedronVolume(a);

    // Выводим результат
    std::cout << "Объем икосаэдра с длиной ребра " << a << " равен: " << volume << std::endl;

    return 0;
}

