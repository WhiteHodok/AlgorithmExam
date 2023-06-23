# Задача 

Динамическая квадратная матрица. Размерность задаётся пользователем в процессе работы
Для формирования матрицы используется генератор случайных чисел. Элементы варируются от - 10 до +10
Заменить элементы матрицы сумма индексов которого кратна n на максимальное значение в первое строке исходной матрицы
Поиск макс элемента реализовать с помощью подпрограммы
Вывести исходную матрицу, макс значение, рез матрицу.


## Пошаговое решение :

1. Подключение необходимых библиотек:

```sh
#include <iostream>
#include <cstdlib> // Для генерации случайных чисел
#include <ctime>   // Для инициализации генератора случайных чисел
```

2. Объявление функций:

```sh
void generateMatrix(int**& matrix, int size);
int findMaxElement(const int* arr, int size);
void replaceElements(int** matrix, int size, int n, int maxVal);
void printMatrix(int** matrix, int size);
void deleteMatrix(int**& matrix, int size);
```

3. Реализация функций:
- Функция generateMatrix создает динамическую квадратную матрицу и заполняет ее случайными числами:
```sh
void generateMatrix(int**& matrix, int size) {
    matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 21 - 10; // Генерация чисел от -10 до +10
        }
    }
}
```

- Функция findMaxElement находит максимальный элемент в массиве:
```sh
int findMaxElement(const int* arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
```
