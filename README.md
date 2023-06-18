# AlgorithmExam
## ATTENTION

Если вы обладаете нулевыми знаниями по данной дисциплине , рекомендуемое время для освоения в курсе - НЕДЕЛЯ , за меньший срок можно не успеть.

## C++ курс 
- тащемта тут ссылка на степик думаю разберётесь https://stepik.org/course/7/info


## Теория алгоритмов 

Здесь я приложу замечательную книжку "Грокаем алгоритмы" Адитьи Бхаргвы , прочитав даже 100 страниц можно понять весь материал лекций за семестр , даже не напрягаясь :

- https://drive.google.com/file/d/1uPSfAtQZlVUUfidYnqKSxpfyFpu0KXgU/view?usp=sharing

Очень краткий конспект-шпаргалка для экзамена :

- Алгоритмом называется набор инструкций для выполнения некоторой задачи.
- Бинарный поиск и что это такое рассказывается на странице номер 20.

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/0507b6f5-4f29-4029-ab94-8860a57cecc6)

- Что такое О(n) ?
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/238ed361-f63d-4e2d-bf89-b566375dcd4a)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/207a98a9-ced4-4567-907a-8350237bca41)

- <О-большое>> определяет время выполнения  в худшем случае .
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/078c4340-092a-425d-898e-97b173f13671)

- Задача о Коммивояжере на странице 37.
- Сортировка выбором представлена на 40 странице.
- Шпаргалка :
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/e6a0332d-9758-4918-b270-f9d8a25b719b)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/e8ee28ba-adfa-4f3d-aa52-0383ca6155dd)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/10137b2d-b329-436e-8e5b-e7d4ad368554)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/dc20c968-3534-48e8-811c-fae69ae4b033)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/573fada2-4be9-41c8-bb3d-5c799084e133)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/94767eb6-1821-4e70-b27d-17c518abdce6)



## Как работает память
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/06201caf-8d0e-4c72-b5c0-181eb8e0f4ea)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/6f6bd35a-7e51-4847-be2a-34bf1a238961)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/c5d80ff8-9131-4332-a157-99c8c92b1f29)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/8a4fb98d-d22b-4bd6-b8fd-f6f4056a1012)


## Структура программы на языке C++ 

- https://metanit.com/cpp/tutorial/2.1.php

## Зачем нужны заголовочные файлы
- также тут отмечено чем отличается объявление функции от её определения
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/7afd40ed-12a0-469d-b50f-d7c29bfa47f1)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/d3892b3b-b497-47a0-a2c4-0e4ab3259b5f)

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/15c3d7b9-0351-4780-80fd-f27c902e67a9)

## Как подключить заголовочные файлы
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/d5469a9d-5959-4943-8ebb-e17d7282c092)




## Макросы и зачем они нужны
- https://stepik.org/lesson/534/step/7?unit=857
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/118f2abc-6e5b-4fea-9c83-70d748567f75)



## Как выглядит компиляция на языке C++ 

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/df3856ae-6f88-42ee-939c-1910fba7de23)

- https://stepik.org/lesson/535/step/6?unit=858

![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/574e7c19-1e8f-43be-8d87-51a84a560b90)

## Переменные 

- https://metanit.com/cpp/tutorial/2.2.php

В C++ существует несколько основных типов переменных. Вот некоторые из них с примерами вывода :

- Целочисленные типы (Integer types):

```sh
int integer = 10;
std::cout << "Integer:" << integer << std::endl;

long long bigInteger = 123456789012345LL;
std::cout << "Big Integer: " << bigInteger << std::endl;
```

- Вещественные типы (Floating-point types):

```sh
float floatingPoint = 3.14f;
std::cout << "Floating Point: " << floatingPoint << std::endl;

double doublePrecision = 2.71828;
std::cout << "Double Precision: " << doublePrecision << std::endl;
```

- Символьный тип (Character type):

```sh
char character = 'A';
std::cout << "Character: " << character << std::endl;
```

- Строковый тип (String type):

```sh
std::string string = "Hello, World!";
std::cout << "String: " << string << std::endl;
```

- Логический тип (Boolean type):

```sh
bool boolean = true;
std::cout << "Boolean: " << std::boolalpha << boolean << std::endl;
```

- Указатель (Pointer type):

```sh
int* pointer = nullptr;
std::cout << "Pointer: " << pointer << std::endl;
```

- Массив (Array type):

```sh
int array[] = {1, 2, 3, 4, 5};
std::cout << "Array: ";
for (int i = 0; i < sizeof(array) / sizeof(int); ++i) {
    std::cout << array[i] << " ";
}
std::cout << std::endl;
```

## Размеры типов данных
![image](https://github.com/WhiteHodok/AlgorithmExam/assets/39564937/8941e6d5-0e59-4ab9-aa2d-7d019aa5a1c1)

## Ввод и вывод в консоли
- https://metanit.com/cpp/tutorial/2.10.php

## Арифметические операции в C++ 
- https://metanit.com/cpp/tutorial/2.6.php

Code : 

```sh
#include <iostream>

int main() {
    int a = 10;
    int b = 5;

    // Сложение
    int sum = a + b;
    std::cout << "Сумма: " << sum << std::endl;

    // Вычитание
    int difference = a - b;
    std::cout << "Разность: " << difference << std::endl;

    // Умножение
    int product = a * b;
    std::cout << "Произведение: " << product << std::endl;

    // Деление
    int quotient = a / b;
    std::cout << "Частное: " << quotient << std::endl;

    // Остаток от деления
    int remainder = a % b;
    std::cout << "Остаток от деления: " << remainder << std::endl;

    // Инкремент
    int c = 7;
    c++;
    std::cout << "Инкремент: " << c << std::endl;

    // Декремент
    int d = 3;
    d--;
    std::cout << "Декремент: " << d << std::endl;

    return 0;
}
```

Вывод в консоли:

```sh
Сумма: 15
Разность: 5
Произведение: 50
Частное: 2
Остаток от деления: 0
Инкремент: 8
Декремент: 2
```

## Некоторые примеры неявных преобразований в коде :
- https://metanit.com/cpp/tutorial/2.4.php

## Операции присваивания :
- https://metanit.com/cpp/tutorial/2.9.php

## Тернарные операторы :
- https://metanit.com/cpp/tutorial/2.12.php

## Циклы :
- https://metanit.com/cpp/tutorial/2.13.php 
- https://www.youtube.com/watch?v=Fh3huPx-kPI

## Ссылки и указатели :
- https://metanit.com/cpp/tutorial/2.14.php - ссылки
- https://metanit.com/cpp/tutorial/4.1.php - указатели

## Массивы : 
- https://metanit.com/cpp/tutorial/2.15.php 
- https://metanit.com/cpp/tutorial/2.18.php
- https://metanit.com/cpp/tutorial/2.19.php
- https://metanit.com/cpp/tutorial/2.16.php
- https://www.youtube.com/watch?v=miIbncBEn9c

## Функции :
- https://metanit.com/cpp/tutorial/3.1.php

## ООП :
- https://metanit.com/cpp/tutorial/5.1.php



