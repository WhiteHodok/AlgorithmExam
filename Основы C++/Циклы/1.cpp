#include <iostream>
   
int main()
{
    int n {};   // предельное наибольшее число
    std::cout << "Enter a limit: ";
    std::cin >> n;  // вводим число
    for (int i {1}; i <= n; i += 2)
    {
        std::cout << i << ": " << i * i << std::endl;
    }
}