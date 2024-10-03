#include <iostream>
#include "Student.hpp"

int main() {
    std::tm birthDate1 = {};
    birthDate1.tm_year = 2002 - 1900; // года с 1900
    birthDate1.tm_mon = 11; // октябрь (от 0 до 11)
    birthDate1.tm_mday = 7;

    Student student1("Никита Сюрняев", birthDate1, "Группа А", 2452, 5.0f);

    std::tm birthDate2 = {};
    birthDate2.tm_year = 2001 - 1900; // года с 1900
    birthDate2.tm_mon = 3; // май (от 0 до 11)
    birthDate2.tm_mday = 10;

    Student student2("Алексей Петров", birthDate2, "Группа Б", 2346, 4.7f);

    std::cout << "Студент 1:\n";
    std::cout << student1.toString() << std::endl;
    std::cout << "Возраст: " << student1.getAge() << " лет" << std::endl;
    std::cout << "Отличник: " << (student1.isExcellentStudent() ? "Да" : "Нет") << std::endl;

    std::cout << std::endl;

    std::cout << "Студент 2:\n";
    std::cout << student2.toString() << std::endl;
    std::cout << "Возраст: " << student2.getAge() << " лет" << std::endl;
    std::cout << "Отличник: " << (student2.isExcellentStudent() ? "Да" : "Нет") << std::endl;

    return 0;
}

