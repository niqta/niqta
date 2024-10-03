#include "Passenger.h"

Passenger::Passenger(const std::string& n) : name(n) {} // Реализация конструктора

std::string Passenger::getName() const {
    return name; // Возврат имени
}

