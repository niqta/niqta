#ifndef PASSENGER_HPP
#define PASSENGER_HPP

#include <string>

class Passenger {
public:
    Passenger(const std::string& name) : name(name) {} // Конструктор
    std::string getName() const; // Метод для получения имени
private:
    std::string name; // Имя пассажира
};

#endif


