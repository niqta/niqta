#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Passenger.h"
#include <vector>
#include <string>

class Car {
private:
    std::string model; // Модель автомобиля
    Engine engine; // Двигатель автомобиля
    std::vector<Passenger> passengers; // Список пассажиров

public:
    Car(const std::string& m, const Engine& e); // Конструктор
    void addPassenger(const Passenger& passenger); // Метод добавления пассажира
    void removePassenger(const Passenger& passenger); // Метод удаления пассажира
    void displayInfo() const; // Метод для отображения информации
};

#endif // CAR_H

