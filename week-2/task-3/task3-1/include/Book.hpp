#ifndef BOOK_HPP
#define BOOK_HPP

#include "Author.hpp"

class Book {
private:
    Author author;

public:
    Book(const Author& author); // Конструктор

    Author getAuthor();
    void displayInfo();
};

#endif


