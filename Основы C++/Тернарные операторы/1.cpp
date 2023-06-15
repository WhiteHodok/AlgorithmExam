#include <iostream>
  
int main()
{
    int a {};
    int b {};
    std::cout << "Enter a first number: ";
    std::cin >> a;
    std::cout << "Enter a second number: ";
    std::cin >> b;
       
    if(a == b)
    {
        std::cout << "numbers are equal" << std::endl;
    }
    else
    {
        std::cout << "numbers are not equal" << std::endl;
    }
}