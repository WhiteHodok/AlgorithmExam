#include <iostream>

using namespace std;

void fillMatrix(int** matrix, int* array, int size) {
    int evenIndex = 0;
    int oddIndex = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            matrix[0][evenIndex] = array[i];
            evenIndex++;
        } else {
            matrix[1][oddIndex] = array[i];
            oddIndex++;
        }
    }

    // Если количество элементов нечетное, добавляем последний элемент во вторую строку
    if (size % 2 != 0) {
        matrix[1][oddIndex] = array[size - 1];
    }
}

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* array = new int[size];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int** matrix = new int*[2];
    for (int i = 0; i < 2; i++) {
        matrix[i] = new int[size / 2 + size % 2];
    }

    fillMatrix(matrix, array, size);

    cout << "Матрица из заполненного массива:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < size / 2 + size % 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Освобождение выделенной памяти
    delete[] array;
    for (int i = 0; i < 2; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
