#include <iostream>
#include <cmath> // Для функции sqrt

int main() {
    double a;
    std::cout << "Введите длину ребра икосаэдра: ";
    std::cin >> a;

    // Вычисляем объем икосаэдра
    double volume = (5.0 / 12.0) * (3.0 + sqrt(5.0)) * pow(a, 3);

    // Выводим результат
    std::cout << "Объем икосаэдра с длиной ребра " << a << " равен: " << volume << std::endl;

    return 0;
}

