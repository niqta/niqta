#include <iostream>
#include "Book.hpp"

Book::Book(const Author& author) 
    : author(author) {}

Author Book::getAuthor() {
    return author;
}

void Book::displayInfo() {
    std::cout << "Автор: " << author.getName() 
              << ", Год рождения: " << author.getBirthYear() << std::endl;
}


