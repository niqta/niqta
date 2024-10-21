#include <iostream>
#include "IP.hpp"

int main() {
    std::string ip;
    std::cout << "Введите IPv6 адрес в полной форме: ";
    std::cin >> ip;

    if (isValidIPv6(ip)) {
        std::cout << "Адрес IPv6 корректен!" << std::endl;
    } else {
        std::cout << "Адрес IPv6 некорректен!" << std::endl;
    }

    return 0;
}

