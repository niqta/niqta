#include "Car.h"
#include <iostream>
#include <algorithm>

Car::Car(const std::string& m, const Engine& e) : model(m), engine(e) {} // Реализация конструктора

void Car::addPassenger(const Passenger& passenger) {
    passengers.push_back(passenger);
    std::cout << "Пассажир " << passenger.getName() << " добавлен в автомобиль." << std::endl;
}

void Car::removePassenger(const Passenger& passenger) {
    auto it = std::remove_if(passengers.begin(), passengers.end(),
                             [&passenger](const Passenger& p) { return p.getName() == passenger.getName(); });
    if (it != passengers.end()) {
        passengers.erase(it, passengers.end());
        std::cout << "Пассажир " << passenger.getName() << " удален из автомобиля." << std::endl;
    } else {
        std::cout << "Пассажир " << passenger.getName() << " не найден в автомобиле." << std::endl;
    }
}

void Car::displayInfo() const {
    std::cout << "Модель автомобиля: " << model << std::endl;
    std::cout << "Мощность двигателя: " << engine.getPower() << " л.с." << std::endl;
    std::cout << "Пассажиры в автомобиле:" << std::endl;
    for (const auto& passenger : passengers) {
        std::cout << "- " << passenger.getName() << std::endl;
    }
}

