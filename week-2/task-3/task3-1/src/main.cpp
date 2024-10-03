#include <iostream>
#include "Author.hpp"
#include "Book.hpp"

int main() {
    Author author("Стивен Кинг", 1947);
    Book book(author);

    book.displayInfo();

    return 0;
}

