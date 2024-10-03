#include <iostream>
#include <cmath>

class Octagon {
private:
    double innerRadius;
private:
    // Функция для вычисления площади восьмиугольника
    static double areaFormula(double radius) {
        return 2 * (1 + std::sqrt(2)) * radius * radius;
    }

    // Функция для вычисления периметра восьмиугольника
    static double perimeterFormula(double radius) {
        return 8 * radius * (1 / std::cos(M_PI / 8));
    }
public:
    // Конструктор для инициализации innerRadius
    Octagon(double radius) : innerRadius(radius) {}

    // Метод для установки значения innerRadius
    void setInnerRadius(double radius) {
        innerRadius = radius;
    }

    // Метод для получения значения innerRadius
    double getInnerRadius() const {
        return innerRadius;
    }

    // Метод для вычисления площади восьмиугольника
    double calculateArea() const {
        return areaFormula(innerRadius);
    }

    // Метод для вычисления периметра восьмиугольника
    double calculatePerimeter() const {
        return perimeterFormula(innerRadius);
    }
};

int main() {
    double radius;
    std::cout << "Введите радиус вписанного круга восьмиугольника: ";
    std::cin >> radius;

    Octagon octagon(radius);
    
    std::cout << "Площадь восьмиугольника: " << octagon.calculateArea() << std::endl;
    std::cout << "Периметр восьмиугольника: " << octagon.calculatePerimeter() << std::endl;

    return 0;
}

