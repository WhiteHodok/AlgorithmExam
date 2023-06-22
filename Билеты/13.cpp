#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

void findMinElementRow(int** matrix, int size) {
    int minRowIndex = 0;
    int minValue = numeric_limits<int>::max();

    // Находим индекс строки с наименьшим значением
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] < minValue && (matrix[i][j] < 50 || matrix[i][j] > 100)) {
                minValue = matrix[i][j];
                minRowIndex = i;
            }
        }
    }

    if (minRowIndex >= 0 && minRowIndex < size) {
        int sum = 0;
        long long product = 1;

        // Вычисляем сумму и произведение элементов выбранной строки
        for (int j = 0; j < size; j++) {
            sum += matrix[minRowIndex][j];
            product *= matrix[minRowIndex][j];
        }

        cout << "Строка с наименьшим значением элемента: " << minRowIndex + 1 << endl;
        cout << "Сумма элементов: " << sum << endl;
        cout << "Произведение элементов: " << product << endl;
    } else {
        cout << "В матрице отсутствуют элементы, удовлетворяющие условию." << endl;
    }
}

int main() {
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
            matrix[i][j] = rand() % 150;  // Случайные значения от 0 до 149
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
    findMinElementRow(matrix, size);

    // Освобождение выделенной памяти
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
