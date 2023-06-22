#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>

using namespace std;




int main() {
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    const int MAX = 10;
    const int MIN = 1;

    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Заполнение матрицы случайными числами
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % (MAX - MIN + 1) + MIN;
        }
    }

    // Формирование одномерного массива с наименьшими значениями элементов строк
    vector<int> minValues(rows, numeric_limits<int>::max());

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minValues[i]) {
                minValues[i] = matrix[i][j];
            }
        }
    }

    // Вывод одномерного массива
    cout << "Одномерный массив с наименьшими значениями элементов строк:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << minValues[i] << " ";
    }
    cout << endl;

    return 0;
}
