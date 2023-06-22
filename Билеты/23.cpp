#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int calculateSumOfNegatives(int* array, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            sum += pow(array[i], 2);
        }
    }

    return sum;
}

int calculateProductBeforeMin(int* array, int size) {
    int minIndex = min_element(array, array + size) - array;
    int product = 1;

    for (int i = 0; i < minIndex; i++) {
        product *= array[i];
    }

    return product;
}

void sortElementsByPosition(int* array, int size) {
    sort(array, array + size);

    int* evenArray = new int[size / 2 + size % 2];
    int* oddArray = new int[size / 2];

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenArray[i / 2] = array[i];
        } else {
            oddArray[i / 2] = array[i];
        }
    }

    sort(evenArray, evenArray + size / 2 + size % 2);
    sort(oddArray, oddArray + size / 2);

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            array[i] = evenArray[i / 2];
        } else {
            array[i] = oddArray[i / 2];
        }
    }

    delete[] evenArray;
    delete[] oddArray;
}

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* array = new int[size];

    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int sumOfNegatives = calculateSumOfNegatives(array, size);
    int productBeforeMin = calculateProductBeforeMin(array, size);

    cout << "Сумма квадратов отрицательных элементов: " << sumOfNegatives << endl;
    cout << "Произведение элементов, расположенных до минимального элемента: " << productBeforeMin << endl;

    sortElementsByPosition(array, size);

    cout << "Упорядоченный массив по возрастанию элементов на четных и нечетных позициях:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;

    return 0;
}
