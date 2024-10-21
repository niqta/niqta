#include "SensorData.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// Метод для вычисления средней температуры
int calculateAverageTemperature(string readings[], int size, SensorData sensorData[]) {
    double sumTemps[100] = {0}; // Сумма температур
    int count[100] = {0};       // Количество показаний
    int uniqueCount = 0;        // Уникальные id датчиков

    for (int i = 0; i < size; ++i) {
        int sensorId = stoi(readings[i].substr(0, 2)); // ID датчика
        int temperature = stoi(readings[i].substr(2)); // Температура

        // Увеличиваем суммарную температуру и количество показаний
        sumTemps[sensorId] += temperature;
        count[sensorId]++;

        // Увеличиваем счётчик уникальных ID
        if (count[sensorId] == 1) {
            uniqueCount++;
        }
    }

    // Заполнение массива sensorData с усреднёнными температурами
    int index = 0;
    for (int i = 0; i < 100; ++i) {
        if (count[i] > 0) {
            sensorData[index].id = i;
            sensorData[index].averageTemp = sumTemps[i] / count[i];
            index++;
        }
    }
    return uniqueCount; // Возвращаем количество уникальных датчиков
}

// Метод для отображения данных
void displayData(SensorData sensorData[], int size, bool sortById) {
    // Сортировка
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (sortById) {
                if (sensorData[j].id > sensorData[j + 1].id) {
                    swap(sensorData[j], sensorData[j + 1]);
                }
            } else {
                if (sensorData[j].averageTemp > sensorData[j + 1].averageTemp || 
                    (sensorData[j].averageTemp == sensorData[j + 1].averageTemp && sensorData[j].id > sensorData[j + 1].id)) {
                    swap(sensorData[j], sensorData[j + 1]);
                }
            }
        }
    }

    // Вывод результата
    for (int i = 0; i < size; ++i) {
        cout << sensorData[i].id << " " << fixed << setprecision(1) << sensorData[i].averageTemp << endl;
    }
}

