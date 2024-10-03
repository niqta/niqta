#include "Author.h"

// Конструктор
Author::Author(const std::string& name, int birthYear) 
    : name(name), birthYear(birthYear) {}

// Метод для установки имени автора
void Author::setName(const std::string& name) {
    this->name = name;
}

// Метод для установки года рождения автора
void Author::setBirthYear(int birthYear) {
    this->birthYear = birthYear;
}

// Метод для получения имени автора
std::string Author::getName() const {
    return name;
}

// Метод для получения года рождения автора
int Author::getBirthYear() const {
    return birthYear;
}

