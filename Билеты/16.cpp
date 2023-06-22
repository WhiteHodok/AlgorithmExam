#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>

using namespace std;

void findMaxValueAndProduct(double* arr, int size, double& maxValue, double& product) {
    maxValue = arr[0];
    int maxIndex = 0;

    // Находим максимальное значение и его индекс
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    product = 1.0;

    // Вычисляем произведение модулей элементов, расположенных после максимального элемента
    for (int i = maxIndex + 1; i < size; i++) {
        product *= abs(arr[i]);
    }
}

void transformArray(double* arr, int size) {
    // Сортируем массив по возрастанию
    sort(arr, arr + size);

    // Индекс последнего отрицательного элемента
    int lastNegativeIndex = -1;

    // Индекс первого положительного элемента
    int firstPositiveIndex = -1;

    // Находим индексы последнего отрицательного элемента и первого положительного элемента
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            lastNegativeIndex = i;
        } else if (arr[i] > 0) {
            firstPositiveIndex = i;
            break;
        }
    }

    // Преобразуем массив
    reverse(arr, arr + lastNegativeIndex + 1);
    reverse(arr + firstPositiveIndex, arr + size);
}

int main() {
    srand(time(nullptr));

    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    double* arr = new double[size];

    // Заполнение массива случайными вещественными числами от -30 до 30
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 61) - 30;  // Генерация случайного числа от -30 до 30
    }

    cout << "Массив случайных вещественных чисел:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double C;
    cout << "Введите значение C: ";
    cin >> C;

    int count = 0;
    double geometricMean = 1.0;
    bool foundMax = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= C) {
            count++;
        }

        if (foundMax) {
            geometricMean *= abs(arr[i]);
        }

        if (arr[i] == *max_element(arr, arr + size)) {
            foundMax = true;
        }
    }

    geometricMean = pow(geometricMean, 1.0 / (size - *max_element(arr, arr + size)));

    cout << "Количество элементов, больших либо равных C: " << count << endl;
    cout << "Среднее геометрическое модулей элементов, расположенных после максимального элемента: " << geometricMean << endl;

    transformArray(arr, size);

    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
