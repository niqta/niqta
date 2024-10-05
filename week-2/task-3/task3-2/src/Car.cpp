#include "Car.hpp"
#include <iostream>

Car::Car(const std::string& m, const Engine& e) : model(m), engine(e), passenger1(nullptr), passenger2(nullptr) {
    // Инициализируем указатели на пассажиров
}

void Car::addPassenger(const Passenger& p) {
    if (passenger1 == nullptr) {
        passenger1 = new Passenger(p);
        std::cout << "Пассажир " << passenger1->getName() << " добавлен в автомобиль." << std::endl;
    } else if (passenger2 == nullptr) {
        passenger2 = new Passenger(p);
        std::cout << "Пассажир " << passenger2->getName() << " добавлен в автомобиль." << std::endl;
    } else {
        std::cout << "Количество пассажиров достигло максимума." << std::endl;
    }
}

void Car::removePassenger(int index) {
    if (index == 1 && passenger1 != nullptr) {
        std::cout << "Пассажир " << passenger1->getName() << " удален из автомобиля." << std::endl;
        delete passenger1;
        passenger1 = nullptr;
    } else if (index == 2 && passenger2 != nullptr) {
        std::cout << "Пассажир " << passenger2->getName() << " удален из автомобиля." << std::endl;
        delete passenger2;
        passenger2 = nullptr;
    } else {
        std::cout << "Некорректный индекс для удаления пассажира." << std::endl;
    }
}

void Car::displayInfo() {
    std::cout << "Модель автомобиля: " << model << std::endl;
    std::cout << "Мощность двигателя: " << engine.getPower() << " л.с." << std::endl;
    std::cout << "Пассажир 1: " << (passenger1 ? passenger1->getName() : "Нет") << std::endl;
    std::cout << "Пассажир 2: " << (passenger2 ? passenger2->getName() : "Нет") << std::endl;
}



