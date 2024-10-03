#ifndef AUTHOR_HPP
#define AUTHOR_HPP

#include <string>

class Author {
private:
    std::string name;
    int birthYear;

public:
    Author(std::string name, int birthYear); // Конструктор

    void setName(std::string name);
    void setBirthYear(int birthYear);
    std::string getName();
    int getBirthYear();
};

#endif


