# Как создать динамический массив с помощью <vector> ?
1. С помощью директивы подключим необходимые заголовочные файлы(можем ещё подключить пространство имён std по-желанию) :
```cpp
#include <iostream> // Эта директива понятно для чего
#include <ctime> // Это для нашего рандома
#include <cstdlib> // Это тоже понятно
#include <algorithm> // Это для сортировки
#include <vector> // А вот это то что нужно
// P.S. Погуглите по каждой директиве, очень поможет в дальнейшем ( директива это #include <...>)
```

2. Напишем наш компаратор сортировки в виде булевой функции(он нужен для сортировки в определённом порядке) :
```cpp
bool compare(int a, int b) {
    return b > a;
}
```

3. Начнём писать наш int main() или void main() ( Второе не советую, хотя сам им пользуюсь) : 
```cpp
void main() {
    setlocale(LC_ALL, "Russian"); // ставим русяз
    srand(time(0)); // сбрасываем счётчик
    const int max = 3; // это будет наше максимальное значение при заполнении массива
    const int min = 1; // сами думайте что это
  ...
```

4. Как выглядит объявление массива в векторе ?
```cpp
// NEW объявление массива
    vector<vector<int>>arr;

    cout << " Введите количество строк: ";
    int rows;
    cin >> rows;
    cout << endl << " Введите количество столбцов: ";
    int cols;
    cin >> cols;
    cout << endl;
...
```

5. Как определить массив в векторе ?
```cpp
// NEW - объявление двумерного массива
    arr.resize(rows, vector<int>(cols, 0));
...
```

6. Заполняется этот массив также как и обычный( и выводится также) :
```cpp
// заполнение массива
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % (max - min + 1) + min;
        }
    }
```

7. Как выглядит сортировка при работе с <vector>? Да очень просто :
```cpp
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
```
- Что такое push_back и как оно работает (https://learn.microsoft.com/ru-ru/cpp/standard-library/vector-class?view=msvc-160#push_back)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/e6883cf3-cbfd-4162-9ad7-bc64e0c1b0d8)


8. Выводим как обычный массив (тут сами справитесь)

