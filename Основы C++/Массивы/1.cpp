#include <iostream>
 
int main()
{
    const int max {6};     // максимальная длина строки - не больше 100 символов
    int numbers[max];       // массив для ввода строки
 
    int i{};        // счетчик введенных символов
    std::cout << "Enter numbers" << std::endl;
    while(i < max)
    {
        std::cin >> numbers[i];    // вводим число
        i++;
    }
    // выводим массив в обратном порядке
    for (i =1; i <= max; ++i)
    {
        std::cout << numbers[max - i] << "\t";
    }
    std::cout << std::endl;
}