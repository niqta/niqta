#include "Email.hpp"
#include <cctype>

bool isEmailValid(const std::string& email) {
    size_t atIndex = email.find('@');
    size_t dotIndex = email.find('.', atIndex);

    // Проверка основного формата: есть "@" и ".", а также правильные длины.
    if (atIndex == std::string::npos || dotIndex == std::string::npos || atIndex == 0 || dotIndex == atIndex + 1 || dotIndex + 1 >= email.length()) {
        return false;
    }

    // Проверка на валидные символы в локальной части
    for (size_t i = 0; i < atIndex; ++i) {
        char c = email[i];
        if (!isalnum(c) && c != '.' && c != '_' && c != '%' && c != '+' && c != '-') {
            return false;
        }
    }

    // Проверка на валидные символы в доменной части
    for (size_t i = atIndex + 1; i < dotIndex; ++i) {
        char c = email[i];
        if (!isalnum(c) && c != '.' && c != '-') {
            return false;
        }
    }

    // Проверка на валидные символы в домене верхнего уровня
    for (size_t i = dotIndex + 1; i < email.length(); ++i) {
        if (!isalpha(email[i])) {
            return false;
        }
    }

    return true;
}





