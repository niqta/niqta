#include <iostream>
#include "year.hpp"

int main() {
    int month = 2;  // Например, февраль
    int year = 2012; // Например, 2012 год

    int days = daysInMonth(month, year);
    
    if (days > 0) {
        std::cout << "Количество дней в месяце " << month << " года " << year << ": " << days << std::endl;
    } else {
        std::cout << "Неверный месяц!" << std::endl;
    }

    return 0;
}



