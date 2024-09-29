#include <iostream>
#include <string>

int main() {
    std::string user;
    std::cout << "Введите ваше имя: ";
    std::getline(std::cin, user);
    std::cout << "Привет, " << user << "!" << std::endl;
    return 0;
}

