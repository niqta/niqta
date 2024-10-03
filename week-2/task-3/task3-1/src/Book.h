#ifndef BOOK_H
#define BOOK_H

#include "Author.h"

class Book {
private:
    Author author;

public:
    // Конструктор
    Book(const Author& author);
    
    // Метод для установки информации об авторе
    void setAuthor(const Author& author);
    
    // Метод для получения информации об авторе
    Author getAuthor() const;
    
    // Метод для отображения информации о книге и авторе
    void displayInfo() const;
};

#endif // BOOK_H

