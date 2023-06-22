#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;



// Функция для вычисления суммы элементов матрицы, сумма индексов которых кратна М
int sumOfElements(int** matrix, int size, int M) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i + j) % M == 0) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int MAX = 10;
    const int MIN = 1;

    int size;
    cout << "Введите размерность матрицы: ";
    cin >> size;

    // Создание динамической квадратной матрицы
    int** matrix = new int* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    // Заполнение матрицы
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
        }
    }

    int M;
    cout << "Введите значение М: ";
    cin >> M;

    // Вычисление суммы элементов матрицы с условием
    int result = sumOfElements(matrix, size, M);
    cout << "Сумма элементов, сумма индексов которых кратна " << M << ": " << result << endl;

   

    return 0;
}
