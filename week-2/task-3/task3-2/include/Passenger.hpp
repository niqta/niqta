#ifndef PASSENGER_HPP
#define PASSENGER_HPP

#include <string>

class Passenger {
private:
    std::string name; // Имя пассажира

public:
    Passenger(const std::string& n); // Конструктор
    std::string getName() const; // Метод для получения имени
};

#endif

