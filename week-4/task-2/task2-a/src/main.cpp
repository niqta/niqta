#include <iostream>
#include <string>
#include "Email.hpp"

int main() {
    std::string email;

    std::cout << "Введите адрес электронной почты: ";
    std::cin >> email;

    if (isEmailValid(email)) {
        std::cout << "Адрес электронной почты корректен!" << std::endl;
    } else {
        std::cout << "Некорректный адрес электронной почты!" << std::endl;
    }

    return 0;
}
