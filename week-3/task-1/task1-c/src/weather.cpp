#include "weather.hpp"

// Функция для проверки, хотите ли вы играть в бадминтон
bool wantToPlay(int день, int погодаТемпература, int осадки, int ветер, int влажность) {
    return (день == 7 && // Воскресенье
            погодаТемпература != 3 && // Не холодно
            осадки == 1 && // Ясно
            ветер == 2 && // Нет ветра
            влажность == 2); // Низкая влажность
}



