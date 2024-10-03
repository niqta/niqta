#include "SecurityGuard.hpp"
#include <iostream>

SecurityGuard::SecurityGuard(std::string n, int id, std::string level)
    : name(n), idNumber(id), clearanceLevel(level) {}

std::string SecurityGuard::getName() { return name; }
int SecurityGuard::getIdNumber() { return idNumber; }
std::string SecurityGuard::getClearanceLevel() { return clearanceLevel; }

void SecurityGuard::setName(std::string n) { name = n; }
void SecurityGuard::setIdNumber(int id) { idNumber = id; }
void SecurityGuard::setClearanceLevel(std::string level) { clearanceLevel = level; }

void SecurityGuard::displayInfo() {
    std::cout << "Имя: " << name 
              << ", ID: " << idNumber 
              << ", Допуск: " << clearanceLevel << std::endl;
}

