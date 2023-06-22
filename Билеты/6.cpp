#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void findBestJump(double** matrix, int size) {
    double bestResult = matrix[0][0];
    int bestAthleteIndex = 0;
    int bestAttemptIndex = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] > bestResult) {
                bestResult = matrix[i][j];
                bestAthleteIndex = i;
                bestAttemptIndex = j;
            }
        }
    }

    cout << "Наилучший результат: " << bestResult << " м" << endl;
    cout << "Спортсмен: " << bestAthleteIndex + 1 << endl;
    cout << "Попытка: " << bestAttemptIndex + 1 << endl;
}

int main() {
    srand(time(nullptr));

    int size;
    cout << "Введите количество спортсменов и попыток: ";
    cin >> size;

    double** matrix = new double*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new double[size];
    }

    // Заполнение матрицы случайными результатами
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = (rand() % 100) / 10.0;  // Генерация случайного числа от 0 до 9.9
        }
    }

    cout << "Матрица результатов прыжков в длину:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    findBestJump(matrix, size);

    // Освобождение выделенной памяти
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
