#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>


using namespace std;

bool compare(int a, int b) {
    return b > a;
}


void main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int max = 3;
    const int min = 1;
    // NEW объявление массива
    vector<vector<int>>arr;

    cout << " Введите количество строк: ";
    int rows;
    cin >> rows;
    cout << endl << " Введите количество столбцов: ";
    int cols;
    cin >> cols;
    cout << endl;
    // NEW - объявление двумерного массива
    arr.resize(rows, vector<int>(cols, 0));
    // заполнение массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % (max - min + 1) + min;
        }
    }
    // вывод зарандомленого массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // NEW SORT
    vector<int> flat_arr; // new array for sort rows , создаём новый массив для отсортированных значений

    // пушим значения
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flat_arr.push_back(arr[i][j]);
        }
    }

    // sorting 1d vector flat_arr
    sort(flat_arr.begin(), flat_arr.end(), compare);

    // обновляем значения в нашем массиве 
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = flat_arr[index++];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
