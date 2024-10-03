#include <iostream>
#include "Author.h"
#include "Book.h"

int main() {
    Author author("Стивен Кинг", 1947);
    Book book(author);

    book.displayInfo();

    return 0;
}

