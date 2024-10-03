#include "Octagon.hpp"
#include <cmath>

double Octagon::areaFormula(double radius) {
    return 8 * (std::sqrt(2)-1) * (radius * radius);
}

double Octagon::perimeterFormula(double radius) {
    return (16 * radius) / (1 + std::sqrt(2));
}

Octagon::Octagon(double radius) : innerRadius(radius) {}

double Octagon::calculateArea() const {
    return areaFormula(innerRadius);
}

double Octagon::calculatePerimeter() const {
    return perimeterFormula(innerRadius);
}


