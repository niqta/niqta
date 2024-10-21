#ifndef SENSORDATA_HPP
#define SENSORDATA_HPP

#include <string>
using namespace std;

// Максимальная длина строки и количество считываемых показаний
const int MAX_LENGTH = 512;
const int MAX_READINGS = 256;

// Структура для хранения информации о датчике
struct SensorData {
    int id;
    double averageTemp;
};

// Прототипы функций
int calculateAverageTemperature(string readings[], int size, SensorData sensorData[]);
void displayData(SensorData sensorData[], int size, bool sortById);

#endif


