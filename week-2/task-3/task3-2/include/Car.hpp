#ifndef CAR_HPP
#define CAR_HPP

#include "Engine.hpp"
#include "Passenger.hpp"
#include <string>

class Car {
private:
    std::string model; // Модель автомобиля
    Engine engine; // Двигатель
    Passenger* passenger1; // Первый пассажир
    Passenger* passenger2; // Второй пассажир

public:
    Car(const std::string& m, const Engine& e); // Конструктор
    void addPassenger(const Passenger& passenger); // Метод добавления пассажира
    void removePassenger(int index); // Метод удаления пассажира по индексу
    void displayInfo(); // Метод для отображения информации
};

#endif




