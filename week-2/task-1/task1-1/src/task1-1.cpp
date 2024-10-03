#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Конструктор по умолчанию
    Person() : name("Неизвестно"), age(0) {}

    // Конструктор с параметрами
    Person(std::string name, int age) : name(name), age(age) {}

    // Геттер для имени
    std::string getName() const {
        return name;
    }

    // Сеттер для имени
    void setName(const std::string& name) {
        this->name = name;
    }

    // Геттер для возраста
    int getAge() const {
        return age;
    }

    // Сеттер для возраста
    void setAge(int age) {
        if (age >= 0) {
            this->age = age;
        } else {
            std::cout << "Возраст не может быть отрицательным!" << std::endl;
        }
    }

    // Метод для вывода данных о персонаже
    void display() const {
        std::cout << "Имя: " << name << ", Возраст: " << age << std::endl;
    }
};

int main() {
    // Создаем несколько экземпляров класса
    Person person1; // Используется конструктор по умолчанию
    Person person2; // Используется конструктор по умолчанию
    Person person3("Егор", 22); // Используется конструктор с параметрами

    // Изменяем данные первого человека
    person1.setName("Никита");
    person1.setAge(21);
    // Изменяем данные первого человека
    person2.setName("Данила");
    person2.setAge(18);
    // Выводим данные
    person1.display();
    person2.display();
    person3.display();

    return 0;
}

