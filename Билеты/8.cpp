#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void findTeamsWithMoreWins(int** matrix, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        int wins = 0;
        int losses = 0;

        for (int j = 0; j < size; j++) {
            if (j != i) {
                if (matrix[i][j] == 3) {
                    wins++;
                } else if (matrix[i][j] == 0) {
                    losses++;
                }
            }
        }

        if (wins > losses) {
            count++;
        }
    }

    cout << "Количество команд с большим количеством побед, чем поражений: " << count << endl;
}

int main() {
    srand(time(nullptr));

    int size;
    cout << "Введите размер таблицы (количество команд): ";
    cin >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    // Заполнение матрицы случайными результатами
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                matrix[i][j] = 0;  // Главная диагональ - 0 (ничья)
            } else {
                matrix[i][j] = rand() % 3;  // Случайные значения 0, 1, 2 (поражение, ничья, победа)
            }
        }
    }

    cout << "Таблица футбольного чемпионата:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    findTeamsWithMoreWins(matrix, size);

    // Освобождение выделенной памяти
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
