#include <iostream>
#include <cstdlib>

using namespace std;

void calculateColumnSums(int** matrix, int size) {
    int* columnSums = new int[size];
    for (int j = 0; j < size; j++) {
        columnSums[j] = 0;
        for (int i = 0; i < size; i++) {
            columnSums[j] += matrix[i][j];
        }
    }

    cout << "Сумма элементов в каждом столбце:" << endl;
    for (int j = 0; j < size; j++) {
        cout << "Столбец " << j + 1 << ": " << columnSums[j] << endl;
    }

    delete[] columnSums;
}

int main() {
    int size;
    cout << "Введите размер матрицы: ";
    cin >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    // Заполнение матрицы по заданному правилу
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                matrix[i][j] = 1;  // Элементы главной диагонали - 1
            } else if (i > j) {
                matrix[i][j] = 0;  // Элементы ниже главной диагонали - 0
            } else {
                matrix[i][j] = i + j;  // Элементы выше главной диагонали - сумма индексов
            }
        }
    }

    cout << "Динамическая квадратная матрица:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    calculateColumnSums(matrix, size);

    // Освобождение выделенной памяти
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
