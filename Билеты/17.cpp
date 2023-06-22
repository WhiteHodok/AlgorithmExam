#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int findMinValueColumn(int** matrix, int size) {
    int maxSumColumnIndex = 0;
    int maxSum = 0;

    // Находим индекс столбца с наибольшей суммой модулей элементов
    for (int j = 0; j < size; j++) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += abs(matrix[i][j]);
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxSumColumnIndex = j;
        }
    }

    int minValue = matrix[0][maxSumColumnIndex];

    // Находим наименьшее значение в выбранном столбце
    for (int i = 1; i < size; i++) {
        if (matrix[i][maxSumColumnIndex] < minValue) {
            minValue = matrix[i][maxSumColumnIndex];
        }
    }

    return minValue;
}

int main() {
    srand(time(nullptr));

    int size;
    cout << "Введите размер матрицы: ";
    cin >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    // Заполнение матрицы случайными значениями
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value;
            do {
                value = (rand() % 121) - 40;  // Генерация случайного числа от -40 до 80
            } while (value >= -40 && value <= 80);  // Повторяем генерацию, пока значение находится в диапазоне от -40 до 80
            matrix[i][j] = value;
        }
    }

    cout << "Динамическая квадратная матрица:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int minValue = findMinValueColumn(matrix, size);

    cout << "Наименьшее значение элементов столбца с наибольшей суммой модулей: " << minValue << endl;

    // Освобождение выделенной памяти
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
