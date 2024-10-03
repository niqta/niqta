#ifndef BOOK_HPP
#define BOOK_HPP

#include "Author.hpp"

class Book {
private:
    Author author;

public:
    Book(Author author); // Конструктор

    void setAuthor(Author author);
    Author getAuthor();
    void displayInfo();
};

#endif


