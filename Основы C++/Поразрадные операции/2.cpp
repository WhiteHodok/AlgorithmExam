#include <iostream> 
 
int main()
{
    int a {8};      // 1000
    int b {11};     // 1011
    a = a ^ b;      // 1000 ^ 1011 = 0011
    b = a ^ b;      // 0011 ^ 1011 = 1000
    a = a ^ b;      // 0011 ^ 1000 = 1011
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}