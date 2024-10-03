#include "SecurityGuard.hpp"

int main() {
    SecurityGuard guard1("Никита Сюрняев", 2312, "Полный");
    SecurityGuard guard2("Петр Петров", 1231, "Средний");
    guard1.displayInfo();
    guard2.displayInfo();
    return 0;
}

