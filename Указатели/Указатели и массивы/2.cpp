#include <iostream>
 
int main()
{
    const unsigned n {20};
    unsigned odds[n];
    // инициализируем массив первыми 20 нечетными числами
    for (unsigned i{}; i < n; i++)
    {
        odds[i] = i * 2 + 1;
    }
    const unsigned perline {5};    // количество чисел на строке
    unsigned* ptr{ odds };
    // вывод чисел на консоль
    for (unsigned i{}; i < n; i++)
    {
        std::cout << *ptr++ << "\t";
        // если i кратно 5, то продолжаем вывод на следующей строке
        if ((i + 1) % perline==0)
        {
            std::cout << std::endl;
        }
    }
 
    // вывод в обратном порядке
    std::cout << "\nReverse order:\n";
    for (unsigned i{}; i < n; i++)
    {
        std::cout << *--ptr << "\t";
        if ((i + 1) % perline==0)
        {
            std::cout << std::endl;
        }
    }
}