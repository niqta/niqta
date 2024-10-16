#include "weather.hpp"

// Функция для проверки, хотите ли вы играть в бадминтон
bool wantToPlay(int day, int temperature, int precipitation, int wind, int humidity) {
    return (day == 7 && // Воскресенье
            temperature != 3 && // Не холодно
            precipitation == 1 && // Ясно
            wind == 2 && // Нет ветра
            humidity == 2); // Низкая влажность
}



