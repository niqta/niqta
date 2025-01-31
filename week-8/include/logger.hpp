#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <spdlog/spdlog.h>

class Logger {
public:
    static void init();
    static void info(const std::string& message);
    static void error(const std::string& message);
};

#endif // LOGGER_HPP
