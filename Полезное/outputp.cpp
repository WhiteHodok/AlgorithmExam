#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>


using namespace std;


void outputm(int** arr, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	srand(time(0));
	const int MAX = 100;
	const int MIN = 1;
	int size;
	cin >> size;

	int** arr = new int*[size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % (MAX - MIN + 1) + MIN;
		}
	}

	outputm(arr, size);
}