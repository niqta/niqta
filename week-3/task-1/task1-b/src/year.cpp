#include "year.hpp"

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        return true;
    }
    return false;
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 1:  // Январь
        case 3:  // Март
        case 5:  // Май
        case 7:  // Июль
        case 8:  // Август
        case 10: // Октябрь
        case 12: // Декабрь
            return 31;
        case 4:  // Апрель
        case 6:  // Июнь
        case 9:  // Сентябрь
        case 11: // Ноябрь
            return 30;
        case 2:  // Февраль
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0; // Неверный месяц
    }
}

