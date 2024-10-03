#include <iostream>
#include "Engine.h"
#include "Passenger.h"
#include "Car.h"

int main() {
    Engine engine(150); // Создаем объект Engine с мощностью 150 л.с.
    Car car("Toyota Camry", engine); // Создаем автомобиль

    // Добавляем пассажиров
    Passenger p1("Никита");
    Passenger p2("Александр");
    car.addPassenger(p1);
    car.addPassenger(p2);

    // Выводим информацию об автомобиле
    car.displayInfo();

    // Удаляем пассажира
    car.removePassenger(p1);

    // Выводим информацию об автомобиле после удаления
    car.displayInfo();

    return 0;
}
