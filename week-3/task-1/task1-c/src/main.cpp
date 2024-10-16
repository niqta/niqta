#include <iostream>
#include "weather.hpp"

int main() {
    int day, temperature, precipitation, wind, humidity;

    std::cout << "Выберите день недели:\n1. Понедельник\n2. Вторник\n3. Среда\n4. Четверг\n5. Пятница\n6. Суббота\n7. Воскресенье\n";
    std::cin >> day;

    std::cout << "Выберите температуру:\n1. Жарко\n2. Тепло\n3. Холодно\n";
    std::cin >> temperature;

    std::cout << "Выберите осадки:\n1. Ясно\n2. Облачно\n3. Дождь\n4. Снег\n5. Град\n";
    std::cin >> precipitation;

    std::cout << "Есть ветер?\n1. Да\n2. Нет\n";
    std::cin >> wind;

    std::cout << "Выберите влажность:\n1. Высокая\n2. Низкая\n";
    std::cin >> humidity;

    // Проверяем, хотите ли вы играть в бадминтон
    if (wantToPlay(day, temperature, precipitation, wind, humidity)) {
        std::cout << "Да." << std::endl;
    } else {
        std::cout << "Нет." << std::endl;
    }

    return 0;
}








