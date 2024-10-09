#include <iostream>
#include "age.hpp"

using namespace std;

int main() {
    int age;
    cout << "Введите ваш возраст: ";
    cin >> age;

    printAge(age);

    return 0;
}


