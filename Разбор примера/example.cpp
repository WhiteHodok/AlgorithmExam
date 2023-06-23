#include <iostream>
#include <cstdlib>
#include <ctime>

void generateMatrix(int**& matrix, int size);
int findMaxElement(const int* arr, int size);
void replaceElements(int** matrix, int size, int n, int maxVal);
void printMatrix(int** matrix, int size);
void deleteMatrix(int**& matrix, int size);

int main() {
    setlocale(LC_ALL,"Russian");
    int size;
    int n;

    std::cout << "Введите размерность матрицы: ";
    std::cin >> size;

    int** matrix;
    generateMatrix(matrix, size);

    std::cout << "Введите значение n: ";
    std::cin >> n;

    printMatrix(matrix, size);

    int maxVal = findMaxElement(matrix[0], size);
    std::cout << "Максимальное значение: " << maxVal << std::endl;

    replaceElements(matrix, size, n, maxVal);

    std::cout << "Результирующая матрица:\n";
    printMatrix(matrix, size);

    deleteMatrix(matrix, size);

    return 0;
}

void generateMatrix(int**& matrix, int size) {
    matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 21 - 10;
        }
    }
}

int findMaxElement(const int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void replaceElements(int** matrix, int size, int n, int maxVal) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i + j) % n == 0) {
                matrix[i][j] = maxVal;
            }
        }
    }
}

void printMatrix(int** matrix, int size) {
    std::cout << "Исходная матрица:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void deleteMatrix(int**& matrix, int size) {
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}
