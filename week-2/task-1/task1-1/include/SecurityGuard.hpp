#ifndef SECURITY_GUARD_HPP
#define SECURITY_GUARD_HPP

#include <string>

class SecurityGuard {
private:
    std::string name;
    int idNumber;
    std::string clearanceLevel;

public:
    SecurityGuard(std::string n, int id, std::string level);

    // Геттеры
    std::string getName();
    int getIdNumber();
    std::string getClearanceLevel();

    // Сеттеры
    void setName(std::string n);
    void setIdNumber(int id);
    void setClearanceLevel(std::string level);

    void displayInfo();
};

#endif

