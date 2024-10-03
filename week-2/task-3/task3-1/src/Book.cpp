#include <iostream>
#include "Book.hpp"

Book::Book(Author author) 
    : author(author) {}

void Book::setAuthor(Author author) {
    this->author = author;
}

Author Book::getAuthor() {
    return author;
}

void Book::displayInfo() {
    std::cout << "Автор: " << author.getName() 
              << ", Год рождения: " << author.getBirthYear() << std::endl;
}

