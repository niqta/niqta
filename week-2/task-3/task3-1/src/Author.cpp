#include "Author.hpp"

Author::Author(std::string name, int birthYear) 
    : name(name), birthYear(birthYear) {}

void Author::setName(std::string name) {
    this->name = name;
}

void Author::setBirthYear(int birthYear) {
    this->birthYear = birthYear;
}

std::string Author::getName() {
    return name;
}

int Author::getBirthYear() {
    return birthYear;
}

