#include "logger.hpp"
#include <spdlog/sinks/stdout_color_sinks.h>

void Logger::init() {
    // Настройка spdlog для вывода в консоль
    auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    auto logger = std::make_shared<spdlog::logger>("logger", console_sink);
    spdlog::set_default_logger(logger);
    spdlog::set_level(spdlog::level::info); // Уровень логирования
}

void Logger::info(const std::string& message) {
    spdlog::info(message);
}

void Logger::error(const std::string& message) {
    spdlog::error(message);
}
