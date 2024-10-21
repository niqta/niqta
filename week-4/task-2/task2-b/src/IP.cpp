#include "IP.hpp"

bool isValidHex(const std::string& segment) {
    if (segment.length() > 4 || segment.length() == 0) return false; // Максимум 4 символа, минимум 1
    for (char c : segment) {
        if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))) {
            return false; // Не шестнадцатеричный символ
        }
    }
    return true;
}

bool isValidIPv6(const std::string& ip) {
    int segmentCount = 0;
    std::string segment;

    for (size_t i = 0; i < ip.length(); ++i) {
        if (ip[i] == ':') {
            if (!isValidHex(segment)) {
                return false; // Неверный сегмент
            }
            segment.clear(); // Сбрасываем сегмент
            segmentCount++; // Увеличиваем счетчик сегментов

            // Проверяем, чтобы не было двух двоеточий подряд
            if (i + 1 < ip.length() && ip[i + 1] == ':') {
                return false; // Двойное двоеточие
            }
        } else {
            segment += ip[i];
        }
    }

    // Проверяем последний сегмент
    if (!isValidHex(segment)) {
        return false;
    }
    segmentCount++;

    // Мы ожидаем ровно 8 сегментов
    return segmentCount == 8;
}

