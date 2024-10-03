#ifndef ENGINE_HPP
#define ENGINE_HPP

class Engine {
private:
    int power; // Мощность двигателя

public:
    Engine(int p); // Конструктор
    int getPower() const; // Метод для получения мощности
};

#endif

