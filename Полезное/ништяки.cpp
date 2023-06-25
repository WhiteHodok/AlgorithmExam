#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>

using namespace std;

const int MAX = 10;
const int MIN = 1;

void outm(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void fill(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % (MAX - MIN + 1) + MIN;
		}
	}
}


bool compare(int a, int b) {
	return a > b;
}

void sorter(int** arr, int rows, int cols) {
	int* flat = new int[rows * cols]; // это всё создание одного одномерного массива (т.е это будет длина матрицы)

	int index = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			flat[index] = arr[i][j];
			index++;
		}
	}

	sort(flat, flat + (cols * rows),compare);

	index = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = flat[index];
			index++;
		}
	}
}

void gld(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		arr[i][i] = 1;
	}
}

void dzero(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (j < i) {
				arr[i][j] = 0;
			}
		}
	}
}

void dupper(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (j > i) {
				arr[i][j] = i + j;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int rows;
	int cols;

	cout << "Введите количество строк: ";
	cin >> rows;
	cout << endl; 
	cout << "Введите количество столбцов: ";
	cin >> cols;
	cout << endl;


	int** arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		 arr[i] = new int[cols];
	}

	fill(arr, rows, cols);

	outm(arr, rows, cols);
	
	sorter(arr, rows, cols);
	cout << endl;
	outm(arr, rows, cols);

	cout << endl;

	gld(arr, rows, cols);

	outm(arr, rows, cols);
	
	cout << endl;

	dzero(arr, rows, cols);
	
	outm(arr, rows, cols);
	
	cout << endl;

	dupper(arr, rows, cols);

	outm(arr, rows, cols);
	
	cout << endl;

	return 0;

}
