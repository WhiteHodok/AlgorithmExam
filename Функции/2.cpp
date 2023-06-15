#include <iostream>
 
double pow(double, int);
 
int main()
{
    double n {5};
    int exp {2};
    std::cout << "pow(" << n << "," << exp << ") = " << pow(n, exp) << std::endl;
    std::cout << "pow(" << n << ",-" << exp << ") = " << pow(n, -exp) << std::endl;
}
 
double pow(double x, int n)
{
    double result {1.0};
    if (n >= 0)
    {
        for (int i {1}; i <= n; ++i)
        {
            result *= x;
        }
    }
    else
    {
        for (int i {1}; i <= -n; ++i)
        {
            result /= x;
        }
    }
    return result;
}