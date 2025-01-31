cmake_minimum_required(VERSION 3.14)
project(FibonacciLogger)

# Настройка spdlog
find_package(spdlog REQUIRED)

# Включаем заголовочные файлы
include_directories(include)

# Добавляем исполняемый файл
add_executable(FibonacciLogger
    src/main.cpp
    src/fibonacci.cpp
    src/logger.cpp
)

# Подключаем spdlog
target_link_libraries(FibonacciLogger PRIVATE spdlog::spdlog)
