#include <iostream>
#include "Main.hpp"

void Main::run() {
    Engine engine(150); // Создаем объект Engine
    Car car("Lada", engine); // Создаем автомобиль

    // Добавляем пассажиров
    car.addPassenger(Passenger("Никита"));
    car.addPassenger(Passenger("Валерия"));

    // Пытаемся добавить еще одного пассажира
    car.addPassenger(Passenger("Алексей")); // Должен выйти сообщение о достижении максимума

    // Выводим информацию об автомобиле
    car.displayInfo();

    // Удаляем одного пассажира
    car.removePassenger(1); // Удаляем первого пассажира

    // Выводим информацию об автомобиле после удаления
    car.displayInfo();
}



