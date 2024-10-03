#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
private:
    std::string name;
    int birthYear;

public:
    // Конструктор
    Author(const std::string& name, int birthYear);
    
    // Метод для установки имени автора
    void setName(const std::string& name);
    
    // Метод для установки года рождения автора
    void setBirthYear(int birthYear);
    
    // Метод для получения имени автора
    std::string getName() const;
    
    // Метод для получения года рождения автора
    int getBirthYear() const;
};

#endif // AUTHOR_H

