#include "Engine.hpp"

Engine::Engine(int p) : power(p) {} // Реализация конструктора

int Engine::getPower() const {
    return power; // Возврат мощности
}

