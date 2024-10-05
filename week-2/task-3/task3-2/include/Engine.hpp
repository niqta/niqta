#ifndef ENGINE_HPP
#define ENGINE_HPP

class Engine {
public:
    Engine(int power) : power(power) {} // Конструктор
    int getPower() const;
private:
    int power;
};

#endif


