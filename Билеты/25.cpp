#include <iostream>
#include <cstdlib>

using namespace std;

int findMaxElement(int* array, int size) {
    int maxElement = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }

    return maxElement;
}

int calculateProductOfNegatives(int* array, int size) {
    int product = 1;

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            product *= array[i];
        }
    }

    return product;
}

int calculateSumOfPositivesBeforeMax(int* array, int size, int maxElement) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == maxElement) {
            break;
        }

        if (array[i] > 0) {
            sum += array[i];
        }
    }

    return sum;
}

void reverseArray(int* array, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
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

    int maxElement = findMaxElement(array, size);
    int productOfNegatives = calculateProductOfNegatives(array, size);
    int sumOfPositivesBeforeMax = calculateSumOfPositivesBeforeMax(array, size, maxElement);

    cout << "Произведение отрицательных элементов: " << productOfNegatives << endl;
    cout << "Сумма положительных элементов до максимального элемента: " << sumOfPositivesBeforeMax << endl;

    reverseArray(array, size);

    cout << "Массив с измененным порядком элементов на обратный:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;

    return 0;
}
