#include <iostream>
 
int main()
{
    unsigned count {};
    char ch {};
 
    do
    {
        std::cin >> ch;     // считываем по одному символу
        ++count;            // увеличиваем счетчик символов
    } while (ch != '.');      // повторяем ввод, пока не будет введена точка
 
    // исключаем точку из подсчета, уменьшая счетчик
    --count;
    std::cout << "Characters count: " << count << std::endl;
}