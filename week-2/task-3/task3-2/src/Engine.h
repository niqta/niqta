#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int power; // Мощность двигателя

public:
    Engine(int p); // Конструктор
    int getPower() const; // Метод для получения мощности
};

#endif // ENGINE_H

