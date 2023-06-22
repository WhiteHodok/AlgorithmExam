#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int findMaxAbsoluteValue(int** matrix, int rows, int cols) {
    int maxValue = abs(matrix[0][0]);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int absoluteValue = abs(matrix[i][j]);
            if (absoluteValue > maxValue) {
                maxValue = absoluteValue;
            }
        }
    }

    return maxValue;
}

int findSumBetweenPositiveElements(int** matrix, int rows, int cols) {
    int sum = 0;
    bool foundFirstPositive = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > 0) {
                if (foundFirstPositive) {
                    return sum;
                }
                foundFirstPositive = true;
            } else if (foundFirstPositive) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

void moveZeroToEnd(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int zeroIndex = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                swap(matrix[i][j], matrix[i][zeroIndex]);
                zeroIndex++;
            }
        }
    }
}

int main() {
    int rows, cols;
    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxAbsoluteValue = findMaxAbsoluteValue(matrix, rows, cols);
    int sumBetweenPositiveElements = findSumBetweenPositiveElements(matrix, rows, cols);

    cout << "Максимальное по модулю значение элемента: " << maxAbsoluteValue << endl;
    cout << "Сумма элементов между первым и вторым положительными элементами: " << sumBetweenPositiveElements << endl;

    moveZeroToEnd(matrix, rows, cols);

    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Освобождение выделенной памяти
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
