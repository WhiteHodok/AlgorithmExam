#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool compare(double a, double b) {
    return a > b;
}

const int SIZE = 3;
const int MAX = 40;
const int MIN = -40;

void aboba(vector<double>& gmArray) {
    srand(time(0));

    vector<vector<int>> array(SIZE, vector<int>(SIZE));

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = rand() % (MAX - MIN + 1) + MIN;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        int product = 1;
        for (int j = 0; j < SIZE; j++) {
            product *= array[i][j];
        }
        double rGm = pow(product, 1.0 / SIZE);
        gmArray.push_back(rGm);
    }

    sort(gmArray.begin(), gmArray.end(), compare);
}

int main() {
    setlocale(LC_ALL, "Russian");

    vector<double> gmArray;
    aboba(gmArray);

    cout << "Массив средних геометрических элементов строк (отсортированный по убыванию):" << endl;
    for (double gm : gmArray) {
        cout << gm << " ";
    }
    cout << endl;

    return 0;
}
