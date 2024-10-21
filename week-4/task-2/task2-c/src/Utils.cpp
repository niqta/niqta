#include "Utils.hpp"

std::string removeConsecutiveDuplicates(const std::string& input) {
    std::string result;

    for (size_t i = 0; i < input.length();) {
        char current = input[i];
        size_t count = 1;

        // Подсчет количества повторяющихся символов
        while (i + 1 < input.length() && input[i + 1] == current) {
            count++;
            i++;
        }

        // Если символ повторяется 3 и более раз, добавляем только один
        if (count >= 3) {
            result += current; // Добавляем только один текущий символ
        } else {
            // Иначе добавляем все повторения
            result.append(count, current);
        }

        i++; // Переход к следующему символу
    }

    return result;
}
