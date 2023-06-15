#include <iostream>
  
int main()
{
    int a {};
    int b {};
    std::cout << "Enter a first number: ";
    std::cin >> a;
    std::cout << "Enter a second number: ";
    std::cin >> b;
     
    // если не равно 0
    if(b!=0)  
    {
        // если НЕ равно 0, то числа кратны
        if(a % b!=0)
        {
             
            std::cout << "a and not devisible" << std::endl;    // числа НЕ кратны
        }
        else
        {
            std::cout << "a and b devisible" << std::endl;  // числа кратны
        }
    }
    else
    {
        std::cout << "Panic! b = 0! Bad data!" << std::endl;
    }   
}