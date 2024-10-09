#include "sort.hpp"
#include <iostream>

void merge(double arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Размер левой половины
    int n2 = right - mid;  // Размер правой половины

    double* L = new double[n1]; // Левый подмассив
    double* R = new double[n2]; // Правый подмассив

    // Копируем данные во временные массивы L и R
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0; // Индекс для L
    int j = 0; // Индекс для R
    int k = left; // Индекс для основного массива

    // Слияние массивов L и R обратно в arr
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Копируем оставшиеся элементы, если есть
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Освобождаем выделенную память
    delete[] L;
    delete[] R;
}

void mergeSort(double arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Находим середину

        mergeSort(arr, left, mid); // Сортируем левую половину
        mergeSort(arr, mid + 1, right); // Сортируем правую половину

        merge(arr, left, mid, right); // Сливаем отсортированные массивы
    }
}

void sortArray(double arr[], int size) {
    mergeSort(arr, 0, size - 1); // Вызов метода сортировки
}



