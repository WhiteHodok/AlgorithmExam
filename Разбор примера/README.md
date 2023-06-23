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

- Функция replaceElements заменяет элементы матрицы, сумма индексов которых кратна n, на максимальное значение в первой строке:
```sh
void replaceElements(int** matrix, int size, int n, int maxVal) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i + j) % n == 0) {
                matrix[i][j] = maxVal;
            }
        }
    }
}
```

- Функция printMatrix выводит матрицу и максимальное значение на экран:
\```cpp
void printMatrix(int** matrix, int size) {
    std::cout << "Исходная матрица:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void deleteMatrix(int**& matrix, int size) {
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}
\```

4. Основная программа :
\```sh
int main() {
    int size;
    int n;

    std::cout << "Введите размерность матрицы: ";
    std::cin >> size;
   \```
   

## Код всей программы представлен в example.cpp
