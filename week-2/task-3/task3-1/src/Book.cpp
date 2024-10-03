#include <iostream>
#include "Book.h"

// Конструктор
Book::Book(const Author& author) 
    : author(author) {}

// Метод для установки информации об авторе
void Book::setAuthor(const Author& author) {
    this->author = author;
}

// Метод для получения информации об авторе
Author Book::getAuthor() const {
    return author;
}

// Метод для отображения информации о книге и авторе
void Book::displayInfo() const {
    std::cout << "Автор: " << author.getName() 
              << ", Год рождения: " << author.getBirthYear() << std::endl;
}

