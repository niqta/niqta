#include <iostream>
#include <string>
#include <sstream>
#include "SensorData.hpp"

using namespace std;

int main() {
    string input;
    cout << "Введите пакет показаний с датчиков (до 512 символов): ";
    getline(cin, input);

    if (input.length() > MAX_LENGTH) {
        cout << "Ошибка: строка слишком длинная." << endl;
        return 1;
    }

    // Разделение входной строки на показания
    string readings[MAX_READINGS];
    int size = 0;
    stringstream ss(input);
    string token;

    while (getline(ss, token, '@') && size < MAX_READINGS) {
        readings[size++] = token;
    }

    SensorData sensorData[100]; // Максимум 100 датчиков
    int uniqueCount = calculateAverageTemperature(readings, size, sensorData);

    // Выбор поля для сортировки
    int sortChoice;
    cout << "По какому полю нужно сортировать? (0 - по id, 1 - по средней температуре): ";
    cin >> sortChoice;

    bool sortById = (sortChoice == 0);
    displayData(sensorData, uniqueCount, sortById);

    return 0;
}

